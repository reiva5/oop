#ifndef ANIMAL_H
#define ANIMAL_H 
#include <bits/stdc++.h>
#include "renderable.h"

using namespace std;

/** @class Animal
  * Kelas Animal representasi binatang dengan posisi, massa dan ketentuan jinak.
  */
class Animal: public Renderable {
public:
  /** @brief Constructor.
    * @param c Nilai inisial Animal yang ingin diciptakan
    * @param i Nilai ID Animal yang ingin diciptakan
    */
  Animal(char c, int i);
  /** @brief Setter jinak
    * @param _jinak Nilai jinak Animal yang ingin dimasukkan 
    */
  void SetJinak(bool _jinak);
  /** @brief Mengecek apakah animal jinak
    * @return jinak
    */
  bool IsJinak();
  /** @brief Getter inisial
    * @return inisial
    */
  char GetInisial();
  /** @brief Getter ID
    * @return ID
    */
  int GetID();
  /** @brief Getter massa
    * @return massa
    */
  int GetMassa();
  /** @brief Getter posisi x
    * @return x
    */
  int GetPosisiX();
  /** @brief Getter posisi y
    * @return y
    */
  int GetPosisiY();
  /** @brief Setter massa
    * @param kg Nilai massa animal yang ingin dimasukkan
    */
  void SetMassa(int kg);
  /** @brief Setter x
    * @param _x Nilai posisi x animal yang ingin dimasukkan
    */
  void SetX(int _x);
  /** @brief Setter y
    * @param _y Nilai posisi y animal yang ingin dimasukkan
    */
  void SetY(int _y);
  /** @brief Menampilkan karakter inisial dari animal ke layar
    */
  void Render();
  /** @brief Getter type
    * @return type
    */
  vector<char>& GetHabitat();
  /** @brief Menambahkan c kedalam type
    * @param c nilai habitat animal yang ingin ditambahkan ke type
    */
  void AddHabitat(char c);
  /** @brief Getter jumlah makanan animal
    * @return Nilai makanan yang diperlukan animal
    */
  virtual int GetJmlMakanan() = 0;
  /** @brief Menampilkan interaksi dari animal
    * Menampilkan interaksi animal ke layar 
    */
  virtual void Interact() = 0;
  

private:
  int x;
  int y;
  int massa;
  bool jinak;
  const int ID;
  const char inisial;
  vector<char> type;
};

#endif