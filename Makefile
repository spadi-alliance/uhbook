#
#
#

CXX = g++
CXXFLAGS = -std=c++11 -Wall -g -O
INCLDES = -I.
LIBS = -lm

EXECS = uhbook test_slowdashify
all: $(EXECS)

uhbook: uhbook.cxx
	$(CXX) $(CXXFLAGS) -DTEST_MAIN -o $@ $(INCLDES) \
		$< \
		$(LIBS)

test_slowdashify: test_slowdashify.cxx
	$(CXX) $(CXXFLAGS) -o $@ $(INCLDES) \
		$< \
		$(LIBS)

clean:
	rm  $(EXECS)
