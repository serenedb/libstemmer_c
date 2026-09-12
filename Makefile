include mkinc.mak
ifeq ($(OS),Windows_NT)
EXEEXT=.exe
endif
CFLAGS=-O2
CPPFLAGS=-Iinclude
ARFLAGS=-cr
all: libstemmer.a stemwords$(EXEEXT)
libstemmer.a: $(snowball_sources:.c=.o)
	$(AR) -cr $@ $^
stemwords$(EXEEXT): examples/stemwords.o libstemmer.a
	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm -f stemwords$(EXEEXT) libstemmer.a *.o src_c/*.o examples/*.o runtime/*.o libstemmer/*.o
