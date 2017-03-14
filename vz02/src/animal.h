#ifndef ANIMAL_H
#define ANIMAL_H 
#include "renderable.h"
#include <vector>
#include <bits/stdc++.h>

using namespace std;
/** @class Animal
  * Kelas Animal 
  */
class Animal
{
	public:
		/** @brief Constructor.
		  * @param c Karakter inisial yang diinginkan
		  * @param h Karakter habitat yang diinginkan
		  */
		Animal(int , int , int, char c, string nama, string interact, bool jinak, string habitat, int i);
		Animal operator= (const Animal& A);
		void SetJinak(bool _jinak);
		bool IsJinak();
		char GetInisial();
		int GetID();
		int GetMassa();
		
		/** @brief Mengembalikan posisi binatang di x
		  * @return Nilai x
		  */
		int GetPosisiX();
		
		/** @brief Mengembalikan posisi binatang di y
		  * @return Nilai x
		  */
		int GetPosisiY();
		
		/** @brief
		  * @return type dari animal
		  */
		string GetType();
		
		/** @brief
		  */
		void SetMassa(int kg);
		
		/** @brief Merubah nilai x 
		  * @param _x Nilai x yang akan dimasukkan  
		  */
		void SetX(int _x);
		
		/** @brief Merubah nilai y
		  * @param _y Nilaii y yang akan dimasukkan
		  */
		void SetY(int _y);
		
		/** @brief Menampilkan karakter inisial dari binatang ke layar
		  */
		void render();
		string GetHabitat();
		void AddHabitat(char c);
		
		/** @brief
		  * @return Nilai makanan yang diperlukan binatang
		  */
		int getMakanan();
		
		/** @brief
		  */
		void interact();
		
		/** @brief
		  * @return nama binatang
		  */
		string GetSpesies();


	private:
		int x;
		int y;
		int massa;
		bool jinak;
		const int ID;
		const char inisial;
		const string nama;
		const string interaksi;
		string type;
		int makanan;
};

#endif