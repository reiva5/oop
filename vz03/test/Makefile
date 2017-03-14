FLAG = -pthread -lgtest_main -lgtest -std=c++11

SRC = animal_test.cpp \
	 air_habitat_test.cpp \
	 aligator_test.cpp \
	 animal_handler_test.cpp \
	 artiodactyl_test.cpp \
	 badak_cula_satu_test.cpp \
	 banteng_test.cpp \
	 bekantan_test.cpp \
	 buaya_test.cpp \
	 cage_test.cpp \
	 cage_handler_test.cpp \
	 carcharhiniformes_test.cpp \
	 carnivore_test.cpp \
	 cell_test.cpp \
	 crocodillia_test.cpp \
	 elang_test.cpp \
	 falconiformes_test.cpp \
	 flying_animal_test.cpp \
	 garuda_test.cpp \
	 harimau_sumatra_test.cpp \
	 herbivora_test.cpp \
	 hiu_karpet_test.cpp \
	 hiu_martil_test.cpp \
	 iguana_test.cpp \
	 kakatua_test.cpp \
	 kancil_test.cpp \
	 karnivora_test.cpp \
	 komodo_test.cpp \
	 land_animal_test.cpp \
	 land_habitat_test.cpp \
	 land_water_animal_test.cpp \
	 macan_test.cpp \
	 manta_ray_test.cpp \
	 nuri_test.cpp \
	 omnivora_test.cpp \
	 orang_utan_test.cpp \
	 parkit_test.cpp \
	 primate_test.cpp \
	 prittaciformes_test.cpp \
	 rajiformes_test.cpp \
	 rusa_test.cpp \
	 siamang_test.cpp \
	 squamata_test.cpp \
	 sting_ray_test.cpp \
	 water_animal_test.cpp \
	 water_habitat_test.cpp \
	 zebra_test.cpp \
	 zoo_test.cpp
	
OBJ = ../bin/animal_test \
	 ../bin/air_habitat \
	 ../bin/aligator \
	 ../bin/animal_handler \
	 ../bin/artiodactyl \
	 ../bin/badak_cula_satu \
	 ../bin/banteng \
	 ../bin/bekantan \
	 ../bin/buaya \
	 ../bin/cage \
	 ../bin/cage_handler \
	 ../bin/carcharhiniformes \
	 ../bin/carnivore \
	 ../bin/cell \
	 ../bin/crocodillia \
	 ../bin/elang \
	 ../bin/falconiformes \
	 ../bin/flying_animal \
	 ../bin/garuda \
	 ../bin/harimau_sumatra \
	 ../bin/herbivora \
	 ../bin/hiu_karpet \
	 ../bin/hiu_martil \
	 ../bin/iguana \
	 ../bin/kakatua \
	 ../bin/kancil \
	 ../bin/karnivora \
	 ../bin/komodo \
	 ../bin/land_animal \
	 ../bin/land_habitat \
	 ../bin/land_water_animal \
	 ../bin/macan \
	 ../bin/manta_ray \
	 ../bin/nuri \
	 ../bin/omnivora \
	 ../bin/orang_utan \
	 ../bin/parkit \
	 ../bin/primate \
	 ../bin/prittaciformes \
	 ../bin/rajiformes \
	 ../bin/rusa \
	 ../bin/siamang \
	 ../bin/squamata \
	 ../bin/sting_ray \
	 ../bin/water_animal \
	 ../bin/water_habitat \
	 ../bin/zebra \
	 ../bin/zoo

all: build run

build: $(SRC)
	g++ -o ../bin/animal_test ../src/animal.cpp ../src/orang_utan.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp animal_test.cpp $(FLAG)
	g++ -o ../bin/air_habitat ../src/air_habitat.cpp ../src/habitat.cpp ../src/cell.cpp ../src/animal.cpp ../src/zooexp.cpp air_habitat_test.cpp $(FLAG)
	g++ -o ../bin/aligator ../src/aligator.cpp ../src/crocodillia.cpp ../src/karnivora.cpp ../src/land_water_animal.cpp ../src/animal.cpp aligator_test.cpp $(FLAG)
	g++ -o ../bin/animal_handler ../src/animal_handler.cpp ../src/animal.cpp ../src/orang_utan.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp animal_handler_test.cpp $(FLAG)
	g++ -o ../bin/artiodactyl ../src/rusa.cpp ../src/artiodactyl.cpp ../src/land_animal.cpp ../src/herbivora.cpp ../src/animal.cpp artiodactyl_test.cpp $(FLAG)
	g++ -o ../bin/badak_cula_satu ../src/badak_cula_satu.cpp ../src/perrisodactyl.cpp ../src/land_animal.cpp ../src/herbivora.cpp ../src/animal.cpp badak_cula_satu_test.cpp $(FLAG)
	g++ -o ../bin/banteng ../src/banteng.cpp ../src/artiodactyl.cpp ../src/land_animal.cpp ../src/herbivora.cpp ../src/animal.cpp banteng_test.cpp $(FLAG)
	g++ -o ../bin/bekantan ../src/bekantan.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp ../src/animal.cpp bekantan_test.cpp $(FLAG)
	g++ -o ../bin/buaya ../src/buaya.cpp ../src/crocodillia.cpp ../src/karnivora.cpp ../src/land_water_animal.cpp ../src/animal.cpp buaya_test.cpp $(FLAG)
	g++ -o ../bin/cage ../src/cage.cpp ../src/cell.cpp ../src/land_habitat.cpp ../src/habitat.cpp ../src/animal.cpp ../src/orang_utan.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp ../src/zooexp.cpp cage_test.cpp $(FLAG)
	g++ -o ../bin/cage_handler ../src/cage_handler.cpp ../src/cage.cpp ../src/cell.cpp ../src/land_habitat.cpp ../src/habitat.cpp ../src/animal.cpp ../src/orang_utan.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp ../src/zooexp.cpp cage_handler_test.cpp $(FLAG)
	g++ -o ../bin/carcharhiniformes ../src/carcharhiniformes.cpp ../src/hiu_karpet.cpp ../src/water_animal.cpp ../src/karnivora.cpp ../src/animal.cpp carcharhiniformes_test.cpp $(FLAG)
	g++ -o ../bin/carnivore ../src/carnivore.cpp ../src/harimau_sumatra.cpp ../src/land_animal.cpp ../src/karnivora.cpp ../src/animal.cpp carnivore_test.cpp $(FLAG)
	g++ -o ../bin/cell ../src/cell.cpp ../src/animal.cpp ../src/orang_utan.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp ../src/zooexp.cpp cell_test.cpp $(FLAG)
	g++ -o ../bin/crocodillia ../src/aligator.cpp ../src/crocodillia.cpp ../src/karnivora.cpp ../src/land_water_animal.cpp ../src/animal.cpp crocodillia_test.cpp $(FLAG)
	g++ -o ../bin/elang ../src/elang.cpp ../src/falconiformes.cpp ../src/karnivora.cpp ../src/flying_animal.cpp ../src/animal.cpp elang_test.cpp $(FLAG)
	g++ -o ../bin/falconiformes ../src/elang.cpp ../src/falconiformes.cpp ../src/karnivora.cpp ../src/flying_animal.cpp ../src/animal.cpp falconiformes_test.cpp $(FLAG)
	g++ -o ../bin/flying_animal ../src/elang.cpp ../src/falconiformes.cpp ../src/karnivora.cpp ../src/flying_animal.cpp ../src/animal.cpp flying_animal_test.cpp $(FLAG)
	g++ -o ../bin/garuda ../src/garuda.cpp ../src/falconiformes.cpp ../src/karnivora.cpp ../src/flying_animal.cpp ../src/animal.cpp garuda_test.cpp $(FLAG)	
	g++ -o ../bin/harimau_sumatra ../src/harimau_sumatra.cpp ../src/carnivore.cpp ../src/karnivora.cpp ../src/land_animal.cpp ../src/animal.cpp harimau_sumatra_test.cpp $(FLAG)
	g++ -o ../bin/herbivora ../src/rusa.cpp ../src/artiodactyl.cpp ../src/land_animal.cpp ../src/herbivora.cpp ../src/animal.cpp herbivora_test.cpp $(FLAG)
	g++ -o ../bin/hiu_karpet ../src/hiu_karpet.cpp ../src/carcharhiniformes.cpp ../src/water_animal.cpp ../src/karnivora.cpp ../src/animal.cpp hiu_karpet_test.cpp $(FLAG)
	g++ -o ../bin/hiu_martil ../src/hiu_martil.cpp ../src/carcharhiniformes.cpp ../src/water_animal.cpp ../src/karnivora.cpp ../src/animal.cpp hiu_martil_test.cpp $(FLAG)
	g++ -o ../bin/iguana ../src/iguana.cpp ../src/squamata.cpp ../src/herbivora.cpp ../src/land_animal.cpp ../src/animal.cpp iguana_test.cpp $(FLAG)
	g++ -o ../bin/kakatua ../src/kakatua.cpp ../src/prittaciformes.cpp ../src/herbivora.cpp ../src/flying_animal.cpp ../src/animal.cpp kakatua_test.cpp $(FLAG)
	g++ -o ../bin/kancil ../src/kancil.cpp ../src/artiodactyl.cpp ../src/land_animal.cpp ../src/herbivora.cpp ../src/animal.cpp kancil_test.cpp $(FLAG)
	g++ -o ../bin/karnivora ../src/harimau_sumatra.cpp ../src/carnivore.cpp ../src/karnivora.cpp ../src/land_animal.cpp ../src/animal.cpp karnivora_test.cpp $(FLAG)
	g++ -o ../bin/komodo ../src/komodo.cpp ../src/squamata.cpp ../src/karnivora.cpp ../src/land_animal.cpp ../src/animal.cpp komodo_test.cpp $(FLAG)
	g++ -o ../bin/land_animal ../src/badak_cula_satu.cpp ../src/perrisodactyl.cpp ../src/land_animal.cpp ../src/herbivora.cpp ../src/animal.cpp land_animal_test.cpp $(FLAG)
	g++ -o ../bin/land_habitat ../src/land_habitat.cpp ../src/habitat.cpp ../src/cell.cpp land_habitat_test.cpp ../src/animal.cpp ../src/zooexp.cpp $(FLAG)
	g++ -o ../bin/land_water_animal ../src/buaya.cpp ../src/crocodillia.cpp ../src/karnivora.cpp ../src/land_water_animal.cpp ../src/animal.cpp land_water_animal_test.cpp $(FLAG)
	g++ -o ../bin/macan ../src/macan.cpp ../src/carnivore.cpp ../src/karnivora.cpp ../src/land_animal.cpp ../src/animal.cpp macan_test.cpp $(FLAG)
	g++ -o ../bin/manta_ray ../src/manta_ray.cpp ../src/rajiformes.cpp ../src/karnivora.cpp ../src/water_animal.cpp ../src/animal.cpp manta_ray_test.cpp $(FLAG)
	g++ -o ../bin/nuri ../src/nuri.cpp ../src/prittaciformes.cpp ../src/herbivora.cpp ../src/flying_animal.cpp ../src/animal.cpp nuri_test.cpp $(FLAG)
	g++ -o ../bin/omnivora ../src/orang_utan.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp ../src/animal.cpp omnivora_test.cpp $(FLAG)
	g++ -o ../bin/orang_utan ../src/orang_utan.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp ../src/animal.cpp orang_utan_test.cpp $(FLAG)
	g++ -o ../bin/parkit ../src/parkit.cpp ../src/prittaciformes.cpp ../src/herbivora.cpp ../src/flying_animal.cpp ../src/animal.cpp parkit_test.cpp $(FLAG)
	g++ -o ../bin/primate ../src/bekantan.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp ../src/animal.cpp primate_test.cpp $(FLAG)
	g++ -o ../bin/prittaciformes ../src/nuri.cpp ../src/prittaciformes.cpp ../src/herbivora.cpp ../src/flying_animal.cpp ../src/animal.cpp prittaciformes_test.cpp $(FLAG)
	g++ -o ../bin/rajiformes ../src/sting_ray.cpp ../src/rajiformes.cpp ../src/karnivora.cpp ../src/water_animal.cpp ../src/animal.cpp rajiformes_test.cpp $(FLAG)
	g++ -o ../bin/rusa ../src/rusa.cpp ../src/artiodactyl.cpp ../src/land_animal.cpp ../src/herbivora.cpp ../src/animal.cpp rusa_test.cpp $(FLAG)
	g++ -o ../bin/siamang ../src/siamang.cpp ../src/primate.cpp ../src/omnivora.cpp ../src/land_animal.cpp ../src/animal.cpp siamang_test.cpp $(FLAG)
	g++ -o ../bin/squamata ../src/komodo.cpp ../src/squamata.cpp ../src/karnivora.cpp ../src/land_animal.cpp ../src/animal.cpp squamata_test.cpp $(FLAG)
	g++ -o ../bin/sting_ray ../src/sting_ray.cpp ../src/rajiformes.cpp ../src/karnivora.cpp ../src/water_animal.cpp ../src/animal.cpp sting_ray_test.cpp $(FLAG)
	g++ -o ../bin/water_animal ../src/hiu_martil.cpp ../src/carcharhiniformes.cpp ../src/water_animal.cpp ../src/karnivora.cpp ../src/animal.cpp water_animal_test.cpp $(FLAG) 
	g++ -o ../bin/water_habitat ../src/water_habitat.cpp ../src/habitat.cpp ../src/cell.cpp ../src/animal.cpp ../src/zooexp.cpp water_habitat_test.cpp $(FLAG)
	g++ -o ../bin/zebra ../src/zebra.cpp ../src/perrisodactyl.cpp ../src/land_animal.cpp ../src/herbivora.cpp ../src/animal.cpp zebra_test.cpp $(FLAG)
	g++ -o ../bin/zoo ../src/zoo.cpp ../src/animal.cpp ../src/road.cpp ../src/facility.cpp ../src/entrance.cpp ../src/exit.cpp ../src/cell.cpp ../src/cage.cpp ../src/zooexp.cpp zoo_test.cpp $(FLAG) 
	
run: $(OBJ)
	./../bin/animal_test
	./../bin/air_habitat
	./../bin/aligator 
	./../bin/animal_handler 
	./../bin/artiodactyl 
	./../bin/badak_cula_satu 
	./../bin/banteng 
	./../bin/bekantan 
	./../bin/buaya 
	./../bin/cage 
	./../bin/cage_handler
	./../bin/carcharhiniformes 
	./../bin/carnivore 
	./../bin/cell 
	./../bin/crocodillia 
	./../bin/elang 
	./../bin/falconiformes 
	./../bin/flying_animal
	./../bin/garuda 
	./../bin/harimau_sumatra 
	./../bin/herbivora 
	./../bin/hiu_karpet 
	./../bin/hiu_martil 
	./../bin/iguana 
	./../bin/kakatua 
	./../bin/kancil 
	./../bin/karnivora 
	./../bin/komodo 
	./../bin/land_animal 
	./../bin/land_habitat 
	./../bin/land_water_animal 
	./../bin/macan 
	./../bin/manta_ray 
	./../bin/nuri
	./../bin/omnivora 
	./../bin/orang_utan 
	./../bin/parkit 
	./../bin/primate 
	./../bin/prittaciformes 
	./../bin/rajiformes 
	./../bin/rusa
	./../bin/siamang 
	./../bin/squamata 
	./../bin/sting_ray 
	./../bin/water_animal 
	./../bin/water_habitat 
	./../bin/zebra 
	./../bin/zoo
