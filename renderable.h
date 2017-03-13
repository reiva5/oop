#ifndef RENDERABLE_h
#define RENDERABLE_h

/** @class Renderable
  * Kelas Renderable menghandle output karakter ke layar
  */
class Renderable {
  public:
    /** @brief Menampilkan suatu karakter ke layar
      */
    virtual void Render()=0;
    /** @brief Menampilkan banner virtual zoo
      */
    static void Banner();
};

#endif