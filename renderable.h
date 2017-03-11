#ifndef RENDERABLE_h
#define RENDERABLE_h

/** @class Renderable
  * Kelas Renderable berfungsi menghandle output karakter cell dan binatang ke layar
  */
class Renderable{
	public:
		/** @brief fungsi virtual 
		  * menampilkan karakter ke layar
		  * @author Pratamamia Agung
		  * @date 
		  */
		virtual void render()=0;
};

#endif