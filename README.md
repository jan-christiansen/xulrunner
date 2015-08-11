XULrunner 31
============

XULRunner can be used as an [embedded browser for SWT applications](https://www.eclipse.org/swt/faq.php#specifyxulrunner). Version 4.5 of SWT supports version 31 of XULRunner only. However, there is a [bug](https://bugzilla.mozilla.org/show_bug.cgi?id=1144634) that is related to mouse hover events on Mac OS. This repository provides a modified version of XULRunner 31 where this bug is supposed to be fixed. To build the source just invoke  `./mach build`.
