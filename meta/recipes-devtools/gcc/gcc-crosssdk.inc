inherit crosssdk

PN = "gcc-crosssdk-${SDK_SYS}"

SYSTEMHEADERS = "${SDKPATHNATIVE}${prefix_nativesdk}/include"
SYSTEMLIBS = "${SDKPATHNATIVE}${base_libdir_nativesdk}/"
SYSTEMLIBS1 = "${SDKPATHNATIVE}${libdir_nativesdk}/"

GCCMULTILIB = "--disable-multilib"

DEPENDS = "virtual/cross-sdk-binutils gettext-native ${NATIVEDEPS}"
PROVIDES = "virtual/cross-sdk-cc virtual/cross-sdk-c++"

gcc_multilib_setup[vardepsexclude] = "MULTILIB_VARIANTS"
