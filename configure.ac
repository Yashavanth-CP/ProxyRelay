#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AM_INIT_AUTOMAKE(pippo, 2,6)
# Checks for programs.
#AX_CHECK_COMPILE_FLAG([-std=c++0x], [CXXFLAGS="$CXXFLAGS -std=c++0x"])
CXXFLAGS="$CXXFLAGS -std=c++0x"
AC_PROG_CXX
AC_PROG_CC
# Checks for libraries.
#AX_CXX_COMPILE_STDCXX_11([ext], [mandatory])
# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_OUTPUT(Makefile src/Makefile)
