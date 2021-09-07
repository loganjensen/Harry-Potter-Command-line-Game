# Author: Logan Jensen
# Assignment: Final Project
# Date: 11 JUN 2019

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -g

OBJS = main.o caboose.o draco.o enginecar.o hogwartsExpress.o menu.o player.o ron.o slytherincar.o space.o storage.o trolleycar.o

SRCS = main.cpp caboose.cpp draco.cpp enginecar.cpp hogwartsExpress.cpp menu.cpp player.cpp ron.cpp slytherincar.cpp space.cpp storage.cpp trolleycar.cpp

HEADERS = caboose.hpp draco.hpp enginecar.hpp hogwartsExpress.hpp menu.hpp player.hpp ron.hpp slytherincar.hpp space.hpp storage.hpp trolleycar.hpp

Binpacking: ${SRCS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o harrypottergame

clean:
	rm harrypottergame