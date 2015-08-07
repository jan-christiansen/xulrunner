/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

/* Auto-generated from files in the Unicode Character Database
   by genSpecialCasingData.pl - do not edit! */

#include "nsSpecialCasingData.h"
#include "mozilla/ArrayUtils.h" // for ArrayLength
#include <stdlib.h>       // for bsearch

/* SpecialCasing-6.1.0.txt */
/* Date: 2011-11-27, 05:10:51 GMT [MD] */

using mozilla::unicode::MultiCharMapping;

static const MultiCharMapping CaseSpecials_Lower[] = {
  { 0x0130, {0x0069, 0x0307, 0x0000} }, // LATIN CAPITAL LETTER I WITH DOT ABOVE
};

static const MultiCharMapping CaseSpecials_Upper[] = {
  { 0x00df, {0x0053, 0x0053, 0x0000} }, // LATIN SMALL LETTER SHARP S
  { 0x0149, {0x02bc, 0x004e, 0x0000} }, // LATIN SMALL LETTER N PRECEDED BY APOSTROPHE
  { 0x01f0, {0x004a, 0x030c, 0x0000} }, // LATIN SMALL LETTER J WITH CARON
  { 0x0390, {0x03aa, 0x0301, 0x0000} }, // GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS
  { 0x03b0, {0x03ab, 0x0301, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS
  { 0x0587, {0x0535, 0x0552, 0x0000} }, // ARMENIAN SMALL LIGATURE ECH YIWN
  { 0x1e96, {0x0048, 0x0331, 0x0000} }, // LATIN SMALL LETTER H WITH LINE BELOW
  { 0x1e97, {0x0054, 0x0308, 0x0000} }, // LATIN SMALL LETTER T WITH DIAERESIS
  { 0x1e98, {0x0057, 0x030a, 0x0000} }, // LATIN SMALL LETTER W WITH RING ABOVE
  { 0x1e99, {0x0059, 0x030a, 0x0000} }, // LATIN SMALL LETTER Y WITH RING ABOVE
  { 0x1e9a, {0x0041, 0x02be, 0x0000} }, // LATIN SMALL LETTER A WITH RIGHT HALF RING
  { 0x1f50, {0x03a5, 0x0313, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH PSILI
  { 0x1f52, {0x03a5, 0x0313, 0x0300} }, // GREEK SMALL LETTER UPSILON WITH PSILI AND VARIA
  { 0x1f54, {0x03a5, 0x0313, 0x0301} }, // GREEK SMALL LETTER UPSILON WITH PSILI AND OXIA
  { 0x1f56, {0x03a5, 0x0313, 0x0342} }, // GREEK SMALL LETTER UPSILON WITH PSILI AND PERISPOMENI
  { 0x1f80, {0x1f08, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH PSILI AND YPOGEGRAMMENI
  { 0x1f81, {0x1f09, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH DASIA AND YPOGEGRAMMENI
  { 0x1f82, {0x1f0a, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH PSILI AND VARIA AND YPOGEGRAMMENI
  { 0x1f83, {0x1f0b, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH DASIA AND VARIA AND YPOGEGRAMMENI
  { 0x1f84, {0x1f0c, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH PSILI AND OXIA AND YPOGEGRAMMENI
  { 0x1f85, {0x1f0d, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH DASIA AND OXIA AND YPOGEGRAMMENI
  { 0x1f86, {0x1f0e, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH PSILI AND PERISPOMENI AND YPOGEGRAMMENI
  { 0x1f87, {0x1f0f, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH DASIA AND PERISPOMENI AND YPOGEGRAMMENI
  { 0x1f88, {0x1f08, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ALPHA WITH PSILI AND PROSGEGRAMMENI
  { 0x1f89, {0x1f09, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ALPHA WITH DASIA AND PROSGEGRAMMENI
  { 0x1f8a, {0x1f0a, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ALPHA WITH PSILI AND VARIA AND PROSGEGRAMMENI
  { 0x1f8b, {0x1f0b, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ALPHA WITH DASIA AND VARIA AND PROSGEGRAMMENI
  { 0x1f8c, {0x1f0c, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ALPHA WITH PSILI AND OXIA AND PROSGEGRAMMENI
  { 0x1f8d, {0x1f0d, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ALPHA WITH DASIA AND OXIA AND PROSGEGRAMMENI
  { 0x1f8e, {0x1f0e, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ALPHA WITH PSILI AND PERISPOMENI AND PROSGEGRAMMENI
  { 0x1f8f, {0x1f0f, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ALPHA WITH DASIA AND PERISPOMENI AND PROSGEGRAMMENI
  { 0x1f90, {0x1f28, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH PSILI AND YPOGEGRAMMENI
  { 0x1f91, {0x1f29, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH DASIA AND YPOGEGRAMMENI
  { 0x1f92, {0x1f2a, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH PSILI AND VARIA AND YPOGEGRAMMENI
  { 0x1f93, {0x1f2b, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH DASIA AND VARIA AND YPOGEGRAMMENI
  { 0x1f94, {0x1f2c, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH PSILI AND OXIA AND YPOGEGRAMMENI
  { 0x1f95, {0x1f2d, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH DASIA AND OXIA AND YPOGEGRAMMENI
  { 0x1f96, {0x1f2e, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH PSILI AND PERISPOMENI AND YPOGEGRAMMENI
  { 0x1f97, {0x1f2f, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH DASIA AND PERISPOMENI AND YPOGEGRAMMENI
  { 0x1f98, {0x1f28, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ETA WITH PSILI AND PROSGEGRAMMENI
  { 0x1f99, {0x1f29, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ETA WITH DASIA AND PROSGEGRAMMENI
  { 0x1f9a, {0x1f2a, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ETA WITH PSILI AND VARIA AND PROSGEGRAMMENI
  { 0x1f9b, {0x1f2b, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ETA WITH DASIA AND VARIA AND PROSGEGRAMMENI
  { 0x1f9c, {0x1f2c, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ETA WITH PSILI AND OXIA AND PROSGEGRAMMENI
  { 0x1f9d, {0x1f2d, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ETA WITH DASIA AND OXIA AND PROSGEGRAMMENI
  { 0x1f9e, {0x1f2e, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ETA WITH PSILI AND PERISPOMENI AND PROSGEGRAMMENI
  { 0x1f9f, {0x1f2f, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ETA WITH DASIA AND PERISPOMENI AND PROSGEGRAMMENI
  { 0x1fa0, {0x1f68, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH PSILI AND YPOGEGRAMMENI
  { 0x1fa1, {0x1f69, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH DASIA AND YPOGEGRAMMENI
  { 0x1fa2, {0x1f6a, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH PSILI AND VARIA AND YPOGEGRAMMENI
  { 0x1fa3, {0x1f6b, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH DASIA AND VARIA AND YPOGEGRAMMENI
  { 0x1fa4, {0x1f6c, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH PSILI AND OXIA AND YPOGEGRAMMENI
  { 0x1fa5, {0x1f6d, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH DASIA AND OXIA AND YPOGEGRAMMENI
  { 0x1fa6, {0x1f6e, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH PSILI AND PERISPOMENI AND YPOGEGRAMMENI
  { 0x1fa7, {0x1f6f, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH DASIA AND PERISPOMENI AND YPOGEGRAMMENI
  { 0x1fa8, {0x1f68, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER OMEGA WITH PSILI AND PROSGEGRAMMENI
  { 0x1fa9, {0x1f69, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER OMEGA WITH DASIA AND PROSGEGRAMMENI
  { 0x1faa, {0x1f6a, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER OMEGA WITH PSILI AND VARIA AND PROSGEGRAMMENI
  { 0x1fab, {0x1f6b, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER OMEGA WITH DASIA AND VARIA AND PROSGEGRAMMENI
  { 0x1fac, {0x1f6c, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER OMEGA WITH PSILI AND OXIA AND PROSGEGRAMMENI
  { 0x1fad, {0x1f6d, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER OMEGA WITH DASIA AND OXIA AND PROSGEGRAMMENI
  { 0x1fae, {0x1f6e, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER OMEGA WITH PSILI AND PERISPOMENI AND PROSGEGRAMMENI
  { 0x1faf, {0x1f6f, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER OMEGA WITH DASIA AND PERISPOMENI AND PROSGEGRAMMENI
  { 0x1fb2, {0x1fba, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH VARIA AND YPOGEGRAMMENI
  { 0x1fb3, {0x0391, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH YPOGEGRAMMENI
  { 0x1fb4, {0x0386, 0x0399, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH OXIA AND YPOGEGRAMMENI
  { 0x1fb6, {0x0391, 0x0342, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH PERISPOMENI
  { 0x1fb7, {0x0391, 0x0342, 0x0399} }, // GREEK SMALL LETTER ALPHA WITH PERISPOMENI AND YPOGEGRAMMENI
  { 0x1fbc, {0x0391, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ALPHA WITH PROSGEGRAMMENI
  { 0x1fc2, {0x1fca, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH VARIA AND YPOGEGRAMMENI
  { 0x1fc3, {0x0397, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH YPOGEGRAMMENI
  { 0x1fc4, {0x0389, 0x0399, 0x0000} }, // GREEK SMALL LETTER ETA WITH OXIA AND YPOGEGRAMMENI
  { 0x1fc6, {0x0397, 0x0342, 0x0000} }, // GREEK SMALL LETTER ETA WITH PERISPOMENI
  { 0x1fc7, {0x0397, 0x0342, 0x0399} }, // GREEK SMALL LETTER ETA WITH PERISPOMENI AND YPOGEGRAMMENI
  { 0x1fcc, {0x0397, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER ETA WITH PROSGEGRAMMENI
  { 0x1fd2, {0x03aa, 0x0300, 0x0000} }, // GREEK SMALL LETTER IOTA WITH DIALYTIKA AND VARIA
  { 0x1fd3, {0x03aa, 0x0301, 0x0000} }, // GREEK SMALL LETTER IOTA WITH DIALYTIKA AND OXIA
  { 0x1fd6, {0x0399, 0x0342, 0x0000} }, // GREEK SMALL LETTER IOTA WITH PERISPOMENI
  { 0x1fd7, {0x03aa, 0x0342, 0x0000} }, // GREEK SMALL LETTER IOTA WITH DIALYTIKA AND PERISPOMENI
  { 0x1fe2, {0x03ab, 0x0300, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND VARIA
  { 0x1fe3, {0x03ab, 0x0301, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND OXIA
  { 0x1fe4, {0x03a1, 0x0313, 0x0000} }, // GREEK SMALL LETTER RHO WITH PSILI
  { 0x1fe6, {0x03a5, 0x0342, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH PERISPOMENI
  { 0x1fe7, {0x03ab, 0x0342, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND PERISPOMENI
  { 0x1ff2, {0x1ffa, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH VARIA AND YPOGEGRAMMENI
  { 0x1ff3, {0x03a9, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH YPOGEGRAMMENI
  { 0x1ff4, {0x038f, 0x0399, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH OXIA AND YPOGEGRAMMENI
  { 0x1ff6, {0x03a9, 0x0342, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH PERISPOMENI
  { 0x1ff7, {0x03a9, 0x0342, 0x0399} }, // GREEK SMALL LETTER OMEGA WITH PERISPOMENI AND YPOGEGRAMMENI
  { 0x1ffc, {0x03a9, 0x0399, 0x0000} }, // GREEK CAPITAL LETTER OMEGA WITH PROSGEGRAMMENI
  { 0xfb00, {0x0046, 0x0046, 0x0000} }, // LATIN SMALL LIGATURE FF
  { 0xfb01, {0x0046, 0x0049, 0x0000} }, // LATIN SMALL LIGATURE FI
  { 0xfb02, {0x0046, 0x004c, 0x0000} }, // LATIN SMALL LIGATURE FL
  { 0xfb03, {0x0046, 0x0046, 0x0049} }, // LATIN SMALL LIGATURE FFI
  { 0xfb04, {0x0046, 0x0046, 0x004c} }, // LATIN SMALL LIGATURE FFL
  { 0xfb05, {0x0053, 0x0054, 0x0000} }, // LATIN SMALL LIGATURE LONG S T
  { 0xfb06, {0x0053, 0x0054, 0x0000} }, // LATIN SMALL LIGATURE ST
  { 0xfb13, {0x0544, 0x0546, 0x0000} }, // ARMENIAN SMALL LIGATURE MEN NOW
  { 0xfb14, {0x0544, 0x0535, 0x0000} }, // ARMENIAN SMALL LIGATURE MEN ECH
  { 0xfb15, {0x0544, 0x053b, 0x0000} }, // ARMENIAN SMALL LIGATURE MEN INI
  { 0xfb16, {0x054e, 0x0546, 0x0000} }, // ARMENIAN SMALL LIGATURE VEW NOW
  { 0xfb17, {0x0544, 0x053d, 0x0000} }, // ARMENIAN SMALL LIGATURE MEN XEH
};

static const MultiCharMapping CaseSpecials_Title[] = {
  { 0x00df, {0x0053, 0x0073, 0x0000} }, // LATIN SMALL LETTER SHARP S
  { 0x0149, {0x02bc, 0x004e, 0x0000} }, // LATIN SMALL LETTER N PRECEDED BY APOSTROPHE
  { 0x01f0, {0x004a, 0x030c, 0x0000} }, // LATIN SMALL LETTER J WITH CARON
  { 0x0390, {0x03aa, 0x0301, 0x0000} }, // GREEK SMALL LETTER IOTA WITH DIALYTIKA AND TONOS
  { 0x03b0, {0x03ab, 0x0301, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND TONOS
  { 0x0587, {0x0535, 0x0582, 0x0000} }, // ARMENIAN SMALL LIGATURE ECH YIWN
  { 0x1e96, {0x0048, 0x0331, 0x0000} }, // LATIN SMALL LETTER H WITH LINE BELOW
  { 0x1e97, {0x0054, 0x0308, 0x0000} }, // LATIN SMALL LETTER T WITH DIAERESIS
  { 0x1e98, {0x0057, 0x030a, 0x0000} }, // LATIN SMALL LETTER W WITH RING ABOVE
  { 0x1e99, {0x0059, 0x030a, 0x0000} }, // LATIN SMALL LETTER Y WITH RING ABOVE
  { 0x1e9a, {0x0041, 0x02be, 0x0000} }, // LATIN SMALL LETTER A WITH RIGHT HALF RING
  { 0x1f50, {0x03a5, 0x0313, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH PSILI
  { 0x1f52, {0x03a5, 0x0313, 0x0300} }, // GREEK SMALL LETTER UPSILON WITH PSILI AND VARIA
  { 0x1f54, {0x03a5, 0x0313, 0x0301} }, // GREEK SMALL LETTER UPSILON WITH PSILI AND OXIA
  { 0x1f56, {0x03a5, 0x0313, 0x0342} }, // GREEK SMALL LETTER UPSILON WITH PSILI AND PERISPOMENI
  { 0x1fb2, {0x1fba, 0x0345, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH VARIA AND YPOGEGRAMMENI
  { 0x1fb4, {0x0386, 0x0345, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH OXIA AND YPOGEGRAMMENI
  { 0x1fb6, {0x0391, 0x0342, 0x0000} }, // GREEK SMALL LETTER ALPHA WITH PERISPOMENI
  { 0x1fb7, {0x0391, 0x0342, 0x0345} }, // GREEK SMALL LETTER ALPHA WITH PERISPOMENI AND YPOGEGRAMMENI
  { 0x1fc2, {0x1fca, 0x0345, 0x0000} }, // GREEK SMALL LETTER ETA WITH VARIA AND YPOGEGRAMMENI
  { 0x1fc4, {0x0389, 0x0345, 0x0000} }, // GREEK SMALL LETTER ETA WITH OXIA AND YPOGEGRAMMENI
  { 0x1fc6, {0x0397, 0x0342, 0x0000} }, // GREEK SMALL LETTER ETA WITH PERISPOMENI
  { 0x1fc7, {0x0397, 0x0342, 0x0345} }, // GREEK SMALL LETTER ETA WITH PERISPOMENI AND YPOGEGRAMMENI
  { 0x1fd2, {0x03aa, 0x0300, 0x0000} }, // GREEK SMALL LETTER IOTA WITH DIALYTIKA AND VARIA
  { 0x1fd3, {0x03aa, 0x0301, 0x0000} }, // GREEK SMALL LETTER IOTA WITH DIALYTIKA AND OXIA
  { 0x1fd6, {0x0399, 0x0342, 0x0000} }, // GREEK SMALL LETTER IOTA WITH PERISPOMENI
  { 0x1fd7, {0x03aa, 0x0342, 0x0000} }, // GREEK SMALL LETTER IOTA WITH DIALYTIKA AND PERISPOMENI
  { 0x1fe2, {0x03ab, 0x0300, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND VARIA
  { 0x1fe3, {0x03ab, 0x0301, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND OXIA
  { 0x1fe4, {0x03a1, 0x0313, 0x0000} }, // GREEK SMALL LETTER RHO WITH PSILI
  { 0x1fe6, {0x03a5, 0x0342, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH PERISPOMENI
  { 0x1fe7, {0x03ab, 0x0342, 0x0000} }, // GREEK SMALL LETTER UPSILON WITH DIALYTIKA AND PERISPOMENI
  { 0x1ff2, {0x1ffa, 0x0345, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH VARIA AND YPOGEGRAMMENI
  { 0x1ff4, {0x038f, 0x0345, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH OXIA AND YPOGEGRAMMENI
  { 0x1ff6, {0x03a9, 0x0342, 0x0000} }, // GREEK SMALL LETTER OMEGA WITH PERISPOMENI
  { 0x1ff7, {0x03a9, 0x0342, 0x0345} }, // GREEK SMALL LETTER OMEGA WITH PERISPOMENI AND YPOGEGRAMMENI
  { 0xfb00, {0x0046, 0x0066, 0x0000} }, // LATIN SMALL LIGATURE FF
  { 0xfb01, {0x0046, 0x0069, 0x0000} }, // LATIN SMALL LIGATURE FI
  { 0xfb02, {0x0046, 0x006c, 0x0000} }, // LATIN SMALL LIGATURE FL
  { 0xfb03, {0x0046, 0x0066, 0x0069} }, // LATIN SMALL LIGATURE FFI
  { 0xfb04, {0x0046, 0x0066, 0x006c} }, // LATIN SMALL LIGATURE FFL
  { 0xfb05, {0x0053, 0x0074, 0x0000} }, // LATIN SMALL LIGATURE LONG S T
  { 0xfb06, {0x0053, 0x0074, 0x0000} }, // LATIN SMALL LIGATURE ST
  { 0xfb13, {0x0544, 0x0576, 0x0000} }, // ARMENIAN SMALL LIGATURE MEN NOW
  { 0xfb14, {0x0544, 0x0565, 0x0000} }, // ARMENIAN SMALL LIGATURE MEN ECH
  { 0xfb15, {0x0544, 0x056b, 0x0000} }, // ARMENIAN SMALL LIGATURE MEN INI
  { 0xfb16, {0x054e, 0x0576, 0x0000} }, // ARMENIAN SMALL LIGATURE VEW NOW
  { 0xfb17, {0x0544, 0x056d, 0x0000} }, // ARMENIAN SMALL LIGATURE MEN XEH
};

static int CompareMCM(const void* aKey, const void* aElement)
{
  const uint32_t ch = *static_cast<const uint32_t*>(aKey);
  const MultiCharMapping* mcm = static_cast<const MultiCharMapping*>(aElement);
  return int(ch) - int(mcm->mOriginalChar);
}

#define MAKE_SPECIAL_CASE_ACCESSOR(which) \
  const MultiCharMapping* \
  Special##which(uint32_t aChar) \
  { \
    const void* p = bsearch(&aChar, CaseSpecials_##which, \
                            mozilla::ArrayLength(CaseSpecials_##which), \
                            sizeof(MultiCharMapping), CompareMCM); \
    return static_cast<const MultiCharMapping*>(p); \
  }

namespace mozilla {
namespace unicode {

MAKE_SPECIAL_CASE_ACCESSOR(Lower)
MAKE_SPECIAL_CASE_ACCESSOR(Upper)
MAKE_SPECIAL_CASE_ACCESSOR(Title)

} // namespace unicode
} // namespace mozilla
