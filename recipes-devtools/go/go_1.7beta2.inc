require go-common.inc

GO_TAG = "1_7"

SRC_URI = "${SRC_URI_PREFIX}/go${PV}.src.tar.gz;name=go_${GO_TAG};subdir=go-${PV}"
SRC_URI[go_1_7.md5sum] = "8ea9d3804b46073b90d4ca4f182e022f"
SRC_URI[go_1_7.sha256sum] = "88840e78905bdff7c8e408385182b4f77e8bdd062cac5c0c6382630588d426c7"

LIC_FILES_CHKSUM = "file://${WORKDIR}/go-${PV}/go/LICENSE;md5=5d4950ecb7b26d2c5e4e7b4e0dd74707"
