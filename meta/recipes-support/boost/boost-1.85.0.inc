# The Boost web site provides free peer-reviewed portable
# C++ source libraries. The emphasis is on libraries which
# work well with the C++ Standard Library. The libraries are
# intended to be widely useful, and are in regular use by
# thousands of programmers across a broad spectrum of applications.
HOMEPAGE = "http://www.boost.org/"
LICENSE = "BSL-1.0 & MIT & Python-2.0"
LIC_FILES_CHKSUM = "file://LICENSE_1_0.txt;md5=e4224ccaecb14d942c71d31bef20d78c"

BOOST_VER = "${@"_".join(d.getVar("PV").split("."))}"
BOOST_MAJ = "${@"_".join(d.getVar("PV").split(".")[0:2])}"
BOOST_P = "boost_${BOOST_VER}"

SRC_URI = "https://boostorg.jfrog.io/artifactory/main/release/${PV}/source/${BOOST_P}.tar.bz2"
SRC_URI[sha256sum] = "7009fe1faa1697476bdc7027703a2badb84e849b7b0baad5086b087b971f8617"

UPSTREAM_CHECK_URI = "http://www.boost.org/users/download/"
UPSTREAM_CHECK_REGEX = "release/(?P<pver>.*)/source/"

S = "${WORKDIR}/${BOOST_P}"
