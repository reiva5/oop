#ifndef PEMAKAN_H
#define PEMAKAN_H


class Pemakan {
public:
	virtual int GetAmount() = 0;
};

/** @class Karnivora
  * Kelas Karnivora yang menyimpan informasi makanan berupa daging
*/
class Karnivora: public Pemakan {
public:
	/** @brief Constructor.
	  * @param n Jumlah daging yang diinginkan
	  */
	void SetAmount(int n);
	/** @brief Mengembalikan nilai daging
	  * @return Nilai daging
	  */
	int GetAmount();

protected:
	int daging;
};

/** @class Herbivora
  * Kelas Herbivora yang menyimpan informasi makanan berupa tumbuhan
*/
class Herbivora: public Pemakan {
public:
	/** @brief Constructor.
	  * @param n Jumlah tumbuhan yang diingiinkan
	  */
	void SetAmount(int n);
	/** @brief Mengembalikan jumlah tumbuhan 
	  * @return Nilai tumbuhan
	  */
	int GetAmount();

protected:
	int tumbuhan;	
};

/** @class Omnivora
  * Kelas Omnivora yang menyimpan informasi makanan baik daging maupun tumbuhan
*/
class Omnivora: public Pemakan {
public:
	/** @brief Constructor.
	  * @param n Jumlah daging_tumbuhan yang diinginkan
	  */
	void SetAmount(int n);
	/** @brief Mengembalikan jumlah daging_tumbuhan
	  * @return Nilai daging_tumbuhan
	  */
	int GetAmount();

protected:
	int daging_tumbuhan;
};

#endif 