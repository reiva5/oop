SDIR =src
ODIR =bin

CC=g++
FLAGO= -c -o
FLAGA= -o
CFLAGS= -std=c++11

OBJ= bin/animal.o \
	bin/land_animal.o \
	bin/water_animal.o \
	bin/flying_animal.o \
	bin/land_water_animal.o \
	bin/land_air_animal.o \
	bin/water_air_animal.o \
	bin/squamata.o \
	bin/primate.o \
	bin/carnivore.o \
	bin/artiodactyl.o \
	bin/perrisodactyl.o \
	bin/crocodillia.o \
	bin/carcharhiniformes.o \
	bin/rajiformes.o \
	bin/falconiformes.o \
	bin/prittaciformes.o \
	bin/animal_handler.o \
	bin/banteng.o \
	bin/bekantan.o \
	bin/badak_cula_satu.o \
	bin/buaya.o \
	bin/rusa.o \
	bin/parkit.o \
	bin/garuda.o \
	bin/harimau_sumatra.o \
	bin/iguana.o \
	bin/komodo.o \
	bin/kancil.o \
	bin/aligator.o \
	bin/macan.o \
	bin/nuri.o \
	bin/kakatua.o \
	bin/manta_ray.o \
	bin/siamang.o \
	bin/hiu_martil.o \
	bin/orang_utan.o \
	bin/hiu_karpet.o \
	bin/sting_ray.o \
	bin/zebra.o \
	bin/elang.o \
	bin/cell.o \
	bin/habitat.o \
	bin/facility.o \
	bin/land_habitat.o \
	bin/water_habitat.o \
	bin/air_habitat.o \
	bin/restaurant.o \
	bin/park.o \
	bin/road.o \
	bin/entrance.o \
	bin/exit.o \
	bin/zooexp.o \
	bin/cage.o \
	bin/cage_handler.o \
	bin/driver.o \
	bin/zoo.o \
	bin/karnivora.o \
	bin/herbivora.o \
	bin/omnivora.o \
	bin/renderable.o \
	src/main.cpp

all: main

bin/%.o: src/%.cpp src/%.h src/include.h
	$(CC) $(FLAGO) $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) $(FLAGA) src/main $^ src/include.h $(CFLAGS)
