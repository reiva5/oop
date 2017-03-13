all: build

build: main.cpp zoo.cpp driver.cpp cage.cpp renderable.cpp listanimal.cpp zooexp.cpp animal.cpp pemakan.cpp
	g++ main.cpp zoo.cpp driver.cpp cage.cpp listanimal.cpp renderable.cpp animal.cpp zooexp.cpp pemakan.cpp -o main -std=c++11

map: map_generator.cpp
	g++ map_generator.cpp -o map_generator -std=c++11
	./map_generator