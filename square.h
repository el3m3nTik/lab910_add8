#pragma once
#include <iostream>

namespace mt
{

    class Square
    {
    public:
        Square();
        Square(int line);
        ~Square();
        double square();
        double Perimetr();
        void Setline(int line);
        int GetR(){
            return m_line;
        }


    private:
        int m_line;
    };
}
