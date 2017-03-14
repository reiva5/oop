all: build

build: main.cpp  cell.cpp zoo.cpp driver.cpp cage.cpp renderable.cpp zooexp.cpp animal.cpp animal_handler.cpp cage_handler.cpp
	g++ main.cpp cell.cpp zoo.cpp driver.cpp cage.cpp renderable.cpp animal.cpp zooexp.cpp animal_handler.cpp cage_handler.cpp -o main -std=c++11

map: map_generator.cpp
	g++ map_generator.cpp -o map_generator -std=c++11
	./map_generator