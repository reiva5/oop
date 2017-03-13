#ifndef ZOOEXP_h
#define ZOOEXP_h

#include "zooexp.h"
#include <string>
using namespace std;

/** @class ZooExp
  * Kelas ZooExp kelas yang menangani exception
  */
class ZooExp {
  public:
    /** @brief Constructor.
      * Menciptkan kelas ZooExp dengan msg_id tertentu
      * @param id Nilai yang akan di masukkan ke msg_id 
      */
    ZooExp(int id);
    /** @brief Menampilkan pesan error 
      * Menampilkan msg[msg_id] ke layar
      */
    void DispError();
    /** @brief Mengetahui banyak exception yang diciptakan
      * @return n
      */
    static int NbExp();

  private:
    const int msg_id;
    static int n;
    static string msg [];
};

#endif