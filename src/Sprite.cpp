#include "Sprite.hpp"

#include <string>
#include <fstream>

namespace GUI {
    void Sprite::Sprite(std::string path) {
        std::ifstream spriteDataStream;
        std::string spriteDataString;        

        spriteDataStream.open(path);

        while(!spriteDataStream.eof) {
            std::getline(spriteDataStream, spriteStateString);
        }

        int strLength = spriteDataString.length();

        this->data = new char[strLength];
    }
}
