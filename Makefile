CXX = clang++
CXXFLAGS = -Wall -g -std=c++17

main: main.o Person.o
	$(CXX) $(CXXFLAGS) -o main main.o Person.o

main.o: main.cpp Person.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp
Person.o: Person.hpp
