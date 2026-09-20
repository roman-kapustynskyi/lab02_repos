// Lab_02.cpp
// < Капустинський Роман >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a;  // 
    double z1; // результат 1-го виразу
    double z2; // результат 2-го виразу

    cout << "a = "; cin >> a;

    z1 = (1 - 2 * sin(a) * sin(a)) / (1 + sin(2 * a));
    z2 = (1 - tan(a)) / (1 + tan(a));

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}