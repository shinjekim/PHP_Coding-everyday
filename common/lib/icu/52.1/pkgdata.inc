GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.52.1.dylib
COMPILE=gcc -DU_ATTRIBUTE_DEPRECATED= -DAI_ADDRCONFIG=0 -I/bitnami/mamp71stack-osx-x64/output/sqlite/include -I/Applications/mampstack-7.1.19-1/common/include -I/Applications/mampstack-7.1.19-1/common/include/sasl -I/Applications/mampstack-7.1.19-1/common/include -arch x86_64   -DU_HAVE_ATOMIC=1  -I/Applications/mampstack-7.1.19-1/common/include -arch x86_64 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -fno-common -c
LIBFLAGS=-I/Applications/mampstack-7.1.19-1/common/include  -dynamic
GENLIB=gcc -dynamiclib -dynamic -I/Applications/mampstack-7.1.19-1/common/include -arch x86_64 -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -L/bitnami/mamp71stack-osx-x64/output/sqlite/lib -L/Applications/mampstack-7.1.19-1/common/lib -arch x86_64  
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,52 -Wl,-current_version -Wl,52.1 -install_name
RPATH_FLAGS=
BIR_LDFLAGS=
AR=ar
ARFLAGS=r -c
RANLIB=ranlib
INSTALL_CMD=/usr/bin/install -c
