#include <iostream>
#include <cmath>
#include "square.h"
using namespace std;

int main()
{
    mt::Square square;
    int line;
    cin >> line;
    square.Setline(line);
    cout << "Acreage of square  = " << square.square() << endl;
    cout << "Perimetr of square  = " << square.Perimetr() << endl;
}

