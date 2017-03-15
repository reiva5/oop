all: animaltest zootest cagetest run

animaltest: animal_test.cpp animal_handler_test.cpp ../src/animal.cpp ../src/animal_handler.cpp
	g++ animal_test.cpp ../src/animal.cpp -o test_animal -pthread -lgtest_main -lgtest -std=c++11
	g++ animal_handler_test.cpp ../src/animal.cpp ../src/animal_handler.cpp -o test_animal_handler -pthread -lgtest_main -lgtest -std=c++11

zootest: zoo_test.cpp cell_test.cpp ../src/zoo.cpp ../src/cell.cpp
	g++ zoo_test.cpp ../src/zoo.cpp ../src/cell.cpp ../src/cage.cpp -o test_zoo -pthread -lgtest_main -lgtest -std=c++11
	g++ cell_test.cpp ../src/cell.cpp -o test_cell -pthread -lgtest_main -lgtest -std=c++11

cagetest: cage_test.cpp  cage_handler_test.cpp ../src/cage.cpp ../src/cage_handler.cpp
	g++ cage_test.cpp ../src/cage.cpp -o test_cage -pthread -lgtest_main -lgtest -std=c++11
	g++ cage_handler_test.cpp ../src/cage_handler.cpp -o test_cage_handler -pthread -lgtest_main -lgtest -std=c++11

run: test_animal test_animal_handler
	./test_animal
	./test_animal_handler
	./test_zoo
	./test_cell
	./test_cage
	./test_cage_handler