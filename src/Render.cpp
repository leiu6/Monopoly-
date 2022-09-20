#include <cstdio>

#include "Render.hpp"
#include "Sprite.hpp"

namespace GUI {
	Render::Render(unsigned int rows, unsigned int cols, char initializer) {
		this->rows = rows;
		this->cols = cols;
		this->initializer = initializer;
		
		this->backBuffer = new char[this->rows * this->cols];
		this->frontBuffer = new char[this->rows * this->cols];
		
		for (int i = 0; i < this->rows*this->cols; i++)
			this->frontBuffer[i] = this->backBuffer[i] = initializer;
	}
	
	Render::~Render() {
		delete[] this->backBuffer;
		delete[] this->frontBuffer;
	}
	
	void Render::display() const {
		for (int i = 0; i < this->rows; i++) {
			for (int j = 0; j < this->cols; j++) {
				std::putchar(this->frontBuffer[this->rows * i + j]);
			}
			
			std::putchar('\n');
		}
	}
	
	void Render::writePixel(int row, int col, char pixel) {
		this->backBuffer[this->rows * row + col] = pixel;
	}
	
	char& Render::operator()(int row, int col) {
		return this->backBuffer[this->rows * row + col];
	}
	
	void Render::drawSprite(int row, int col, const Sprite& sprite) {
		for (int i = 0; i < sprite.rows; i++) {
			for (int j = 0; j < sprite.cols; j++) {
				this->writePixel(row + i, col + j, sprite.data[sprite.rows * row + col]);
			}
		}
	}
	
	void Render::clearBuffer() {
		for (int i = 0; i < this->rows * this->cols; i++) 
			this->backBuffer[i] = this->initializer;
	}
	
	void Render::swapBuffers() {
		for (int i = 0; i < this->rows * this->cols; i++)
			this->frontBuffer[i] = this->backBuffer[i];
	}
}