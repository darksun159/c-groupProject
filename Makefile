.PHONY: all

all: group-project

group-project: main.cpp
	g++ main.cpp -o program.out -Wall -Wextra -pedantic -std=c++11
