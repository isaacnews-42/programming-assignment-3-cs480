CXX = g++
CXXFLAGS = -Wall -g

simarm: main.cpp diskAlgorithms.h
	$(CXX) $(CXXFLAGS) -o simarm main.cpp fcfs.cpp sstf.cpp scan.cpp

clean:
	rm -f simarm