#ifndef RENDER_H_INCLUDED
#define RENDER_H_INCLUDED

#include "Sprite.hpp"

namespace GUI {
    class Render {
		private:
        char* backBuffer;
		char* frontBuffer;
		unsigned int rows;
		unsigned int cols;
		char initializer;
		
		public:
		Render(unsigned int rows, unsigned int cols, char initializer = ' ');
		~Render();
		void display() const;
		void writePixel(int row, int col, char pixel);
		char& operator()(int row, int col);
		void drawSprite(int row, int col, const Sprite& sprite);
		void clearBuffer();
		void swapBuffers();
    };
}

#endif // RENDER_H_INCLUDED