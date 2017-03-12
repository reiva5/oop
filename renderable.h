#ifndef RENDERABLE_h
#define RENDERABLE_h

class Renderable{
	public:
		virtual void render()=0;
		static void banner();
};

#endif