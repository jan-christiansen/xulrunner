// -*- Mode: javascript; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.
"use strict";

function run_test() {
  do_get_profile();

  add_tls_server_setup("OCSPStaplingServer");

  let socket = Cc["@mozilla.org/network/server-socket;1"]
                 .createInstance(Ci.nsIServerSocket);
  socket.init(8080, true, -1);


  add_tests_in_mode(true, true);
  add_tests_in_mode(false, true);
  add_tests_in_mode(true, false);
  add_tests_in_mode(false, false);

  add_test(function() { socket.close(); run_next_test(); });
  run_next_test();
}

function add_tests_in_mode(useMozillaPKIX, useHardFail) {
  let startTime;
  add_test(function () {
    Services.prefs.setBoolPref("security.use_mozillapkix_verification",
                               useMozillaPKIX);
    Services.prefs.setBoolPref("security.OCSP.require", useHardFail);
    startTime = new Date();
    run_next_test();
  });

  add_connection_test("ocsp-stapling-none.example.com", useHardFail
                      ? getXPCOMStatusFromNSS(SEC_ERROR_OCSP_SERVER_ERROR)
                      : Cr.NS_OK, clearSessionCache);

  // Reset state
  add_test(function() {
    let endTime = new Date();
    // With OCSP hard-fail on, we timeout after 10 seconds.
    // With OCSP soft-fail, we timeout after 2 seconds.
    if (useHardFail) {
      do_check_true((endTime - startTime) > 10000);
    } else {
      do_check_true((endTime - startTime) > 2000);
    }
    // Make sure we didn't wait too long.
    // (Unfortunately, we probably can't have a tight upper bound on
    // how long is too long for this test, because we might be running
    // on slow hardware.)
    do_check_true((endTime - startTime) < 60000);
    clearOCSPCache();
    run_next_test();
  });
}
