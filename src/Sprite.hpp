#ifndef SPRITE_H_INCLUDED
#define SPRITE_H_INCLUDED

#include <string>

namespace GUI {
    class Sprite {
    public:
    char* data;
    int rows;
    int cols;

    Sprite(int rows, int cols, char* data) : rows(rows), cols(cols), data(data) {};
    Sprite(std::string path);
    };
}

#endif // SPRITE_H_INCLUDED
