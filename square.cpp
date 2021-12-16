#include "square.h"
using namespace std;
namespace mt
{
    Square::Square()
    {
    }
    Square::Square(int line) {
        m_line = line;
        if (line <= 0)
        {
            cout << "line <= 0" << endl;
            m_line = 1;
        }
    }
    Square::~Square()
    {
    }
    double Square::square() {
        return m_line * m_line;
    }
    void Square::Setline(int line) {
        m_line = line;
        if (line <= 0)
        {
            cout << "line <= 0" << endl;
            m_line = 1;
        }
    }

    double Square::Perimetr() {
        return 4 * m_line;
    }
}