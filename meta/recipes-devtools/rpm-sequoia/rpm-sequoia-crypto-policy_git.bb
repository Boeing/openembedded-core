SUMMARY = "Crypto policy for rpm-sequoia"
HOMEPAGE = "https://gitlab.com/redhat-crypto/fedora-crypto-policies/"

LICENSE = "LGPL-2.1-or-later"

LIC_FILES_CHKSUM = "file://COPYING.LESSER;md5=a6f89e2100d9b6cdffcea4f398e37343"

DEPENDS = "coreutils-native openssl-native make-native"

inherit allarch python3native

SRC_URI = " \
	git://gitlab.com/redhat-crypto/fedora-crypto-policies.git;protocol=https;branch=master \
	file://0001-Make-xsltproc-settable-as-XSLTPROC.patch \
	file://0002-Don-t-use-hardcoded-python3-path.patch \
"

SRCREV = "445ecc87af202c8fc9249b453f41c3ac4553ffbd"
UPSTREAM_CHECK_COMMITS = "1"

S = "${UNPACKDIR}/git"

do_compile () {
	make ASCIIDOC=echo XSLTPROC=echo
}

do_install () {
	mkdir -p ${D}${datadir}/crypto-policies/back-ends
	install -m644 ${S}/output/DEFAULT/rpm-sequoia.txt ${D}${datadir}/crypto-policies/back-ends/rpm-sequoia.config
}

FILES:${PN} = "${datadir}/crypto-policies/back-ends/*"

BBCLASSEXTEND = "native"
