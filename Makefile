.PHONY: all

all: group-project

lounge-vcs: main.cpp
	g++ main.cpp -o lounge-vcs.out -Wall -Wextra -pedantic -std=c++11
