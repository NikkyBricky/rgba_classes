#include <iostream>
#include "rgba.h"


RGBA::RGBA() : r(0), g(0), b(0), a(0) {}


RGBA::RGBA(int nr, int ng, int nb, int na) : r(nr), g(ng), b(nb), a(na) {}


void RGBA::setColor(int nr, int ng, int nb, int na){
    r = nr;
    g = ng;
    b = nb;
    a = na;
}

void RGBA::setColor(){
    r = 0;
    g = 0;
    b = 0;
    a = 0;
}


int RGBA::red() const{
    return r;
}


int RGBA::green() const{
    return g;
}


int RGBA::blue() const{
    return b;
}


int RGBA::alpha() const{
    return a;
}


int min(int a, int b){
    return a < b ? a:b;
}

void RGBA::print(enum PrintType type) const{
    switch (type){
        case E_RGBA:
            std::cout << r << " " << g << " " << b << " " << a << std::endl;
        case E_HEX:
            std::cout << "#" << std::hex << r << g << b << a << std::dec << std::endl;
        case E_INT:
            std::cout << ((a << 24) | (r << 16) | (g << 8) | b);
    }
}

RGBA RGBA::sum(const RGBA &s_color) const{
    RGBA Color = RGBA();
    int nr = min(r + s_color.red(), 255);
    int ng = min(g + s_color.green(), 255);
    int nb = min(b + s_color.blue(), 255);
    int na = min(a + s_color.alpha(), 255);
    Color.setColor(nr, ng, nb, na);
    return Color;


}
