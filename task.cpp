#include <iostream>
#include "stdio.h"
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double xnach, xkon, dx, a, b, c, x, f;
    cout << "Введите начальное значение х: ";
    cin >> xnach;
    cout << "\nВведите конечное значение х: ";
    cin >> xkon;
    cout << "\nВведите значение шага: ";
    cin >> dx;
    cout << "\nВведите значение a: ";
    cin >> a;
    cout << "\nВведите значение b: ";
    cin >> b;
    cout << "\nВведите значение c: ";
    cin >> c;
    x = xnach;
    while (x <= xkon)
    {
        if (a == 0 && x < 0 && b != 0)
        {
            cout << "Функция не квадратичная";
        }
        else if (x != c && x > 0 && b != 0)
        {
            cout << "Знаменатель равен нулю. Функция не корректна";
        }
        else if (c != 0)
        {
            cout << "Знаменатель равен нулю. Функция не корректна";
        }
        if (x < 0 && b != 0)
        {
            f = (a * pow(x,2)) + b;
        }
        else if (x > 0 && b != 0)
        {
            f = (x - a) / (x - c);
        }
        else
        {
            f = x / c;
        }
        int ac = a;
        int bc = b;
        int cc = c;
        if (((ac || bc) && (ac || cc)) != 0)
        {
            cout << "\nx = " << x << " f = " << f;
        }
        else
        {
            int fc = c;
            cout << "\nx = " << x << " f = " << f;
        }
        x = x + dx;
    }
    system("pause");
    return 0;
}
