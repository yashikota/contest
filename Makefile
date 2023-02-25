CC=g++
CFLAGS=-std=gnu++17 -Wall -Wextra -O2 -DONLINE_JUDGE -I/opt/boost/gcc/include -L/opt/boost/gcc/lib
.SUFFIXES = .cpp
objs:=$(wildcard *.cpp)
targets:=$(objs:.cpp=.exe)

.PHONY:all
all: $(targets)

%.exe: %.cpp
	$(CC) $(CFLAGS) -o $@ $<
