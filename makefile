.PHONY: all

all: group-project

group-project: main.cpp
	g++ main.cpp -o program.out -std=c++11