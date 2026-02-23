#include <iostream>
#include "rgba.h"


int main()
{
    RGBA Color = RGBA();
    Color.setColor(15, 25, 13);
    RGBA SomeColor = RGBA(1000, 251, 25, 16);
    Color = Color.sum(SomeColor);
    std::cout << Color.red() << " " << Color.green() << " " << Color.blue() << " " << Color.alpha() << std::endl;
    RGBA::PrintType type = RGBA::PrintType::E_RGBA;
    Color.print(type);
    Color.print(RGBA::PrintType::E_HEX);
    Color.print(RGBA::PrintType::E_INT);
    return 0;
}
