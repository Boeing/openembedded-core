BUILD_CC = "${CCACHE}${BUILD_PREFIX}gcc ${BUILD_CC_ARCH}"
BUILD_CXX = "${CCACHE}${BUILD_PREFIX}g++ ${BUILD_CC_ARCH}"
BUILD_FC = "${BUILD_PREFIX}gfortran ${BUILD_CC_ARCH}"
BUILD_CPP = "${BUILD_PREFIX}gcc ${BUILD_CC_ARCH} -E"
BUILD_LD = "${BUILD_PREFIX}ld ${BUILD_LD_ARCH}"
BUILD_CCLD = "${BUILD_PREFIX}gcc ${BUILD_CC_ARCH}"
BUILD_AR = "${BUILD_PREFIX}ar"
BUILD_AS = "${BUILD_PREFIX}as ${BUILD_AS_ARCH}"
BUILD_RANLIB = "${BUILD_PREFIX}ranlib -D"
BUILD_STRIP = "${BUILD_PREFIX}strip"
BUILD_OBJCOPY = "${BUILD_PREFIX}objcopy"
BUILD_OBJDUMP = "${BUILD_PREFIX}objdump"
BUILD_NM = "${BUILD_PREFIX}nm"
BUILD_READELF = "${BUILD_PREFIX}readelf"
