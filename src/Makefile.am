FLAGS = --pedantic -Wall -std=c++11
LDADD = ./test/gtest/lib/libgtest.a

AM_CPPFLAGS = -I./test/gtest/include
LIBS += -lpthread
AUTOMAKE_OPTIONS = subdir-objects no-dependencies
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}

bin_PROGRAMS = ProxyRelay
ProxyRelay_SOURCES = logger/Logger.cpp logger/Logger.h buffer/Buffer.cpp buffer/Buffer.h \
						buffer/Buffer_pool.cpp buffer/Buffer_pool.h connection/Connection.h\
						connection/Connection.cpp configreader/Configreader.h \
						configreader/Configreader.cpp core/Core.h core/Core.cpp server/Server.h\
						server/Server.cpp

AM_DEFAULT_SOURCE_EXT = .cpp
check_PROGRAMS = unittest
unittest_SOURCES = server/Server.cpp test/test_server.cpp 
TESTS = $(check_PROGRAMS) 
