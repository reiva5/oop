all: animaltest cagetest zootest run

animaltest: animaltest.cpp ../src/animal.cpp ../src/listanimal.cpp ../src/pemakan.cpp
	g++ animaltest.cpp ../src/animal.cpp ../src/listanimal.cpp ../src/pemakan.cpp -o test_animal -pthread -lgtest_main -lgtest -std=c++11

cagetest: cagetest.cpp ../src/cage.cpp ../src/animal.cpp ../src/listanimal.cpp ../src/pemakan.cpp ../src/zooexp.cpp
	g++ cagetest.cpp ../src/cage.cpp ../src/animal.cpp ../src/listanimal.cpp ../src/pemakan.cpp ../src/zooexp.cpp -o test_cage -pthread -lgtest_main -lgtest -std=c++11

zootest: ../src/cage.cpp ../src/zoo.cpp ../src/animal.cpp ../src/listanimal.cpp ../src/pemakan.cpp ../src/zooexp.cpp ../src/renderable.cpp
	g++ zootest.cpp ../src/zoo.cpp ../src/cage.cpp ../src/animal.cpp ../src/listanimal.cpp ../src/pemakan.cpp ../src/zooexp.cpp ../src/renderable.cpp -o test_zoo -pthread -lgtest_main -lgtest -std=c++11
	

run: test_animal test_cage
	./test_animal
	./test_cage
	./test_zoo
