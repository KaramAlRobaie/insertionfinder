AM_CPPFLAGS = -I$(top_srcdir)/include
SUBDIRS = algorithm case cli cube finder
bin_PROGRAMS = insertionfinder
insertionfinder_SOURCES = main.cpp
insertionfinder_LDADD = \
    cli/libcli.la \
    cli/univalue/libunivalue.la \
    finder/libfinder.la \
    case/libcase.la \
    cube/libcube.la \
    algorithm/libalgorithm.la \
    ${PTHREAD_CFLAGS} \
    ${BOOST_SYSTEM_LIBS} \
    ${BOOST_FILESYSTEM_LIBS} \
    ${BOOST_PROGRAM_OPTIONS_LIBS}
lib_LTLIBRARIES = libinsertionfinder.la
libinsertionfinder_la_SOURCES =
libinsertionfinder_la_LIBADD = \
    finder/libfinder.la \
    case/libcase.la \
    cube/libcube.la \
    algorithm/libalgorithm.la

install-exec-hook:
	cd $(DESTDIR)$(bindir) \
		&& mv -f insertionfinder${EXEEXT} insertionfinder-${VERSION}${EXEEXT} \
		&& $(LN_S) insertionfinder-${VERSION}${EXEEXT} insertionfinder${EXEEXT}

uninstall-local:
	cd $(DESTDIR)$(bindir) && rm -f insertionfinder-${VERSION}${EXEEXT}
