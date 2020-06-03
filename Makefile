CXX = g++

CXXFLAGS = -Wall -pthread -g -std=c++2a

timer: src/countdown.o main.o
	$(CXX) $(CXXFLAGS) -o Timer main.o src/countdown.o 