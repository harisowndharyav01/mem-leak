inherit pkgconfig
do_compile() {
    oe_runmake
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 mem-leak ${D}${bindir}/
}
