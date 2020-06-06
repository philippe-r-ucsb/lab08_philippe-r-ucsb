CXX = g++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES = strTests recllTests

all: ${BINARIES}

tests: ${BINARIES}
	./strTests 1
	./strTests 2
	./recllTests 1
	./recllTests 2

strTests: strTests.o tddFuncs.o strFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

recllTests: recllTests.o tddFuncs.o linkedListFuncs.o recLinkedListFuncs.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
