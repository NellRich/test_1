#include <iostream>
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
    cout << endl;
    x = xnach;
    while (x <= xkon)
    {
        if (a == 0 && x < 0 && b != 0)
        {
            cout << "Функция не квадратичная\n";
        }
        else if (x != c && x > 0 && b != 0)
        {
            cout << "Знаменатель равен нулю. Функция не корректн\n";
        }
        else if (c != 0)
        {
            cout << "Знаменатель равен нулю. Функция не корректна\n";
        }
        if (x < 0 && b != 0)
        {
            f = (a * pow(x, 2)) + b;
        }
        else if (x > 0 && b != 0)
        {
            if (x != c)
                f = (x - a) / (x - c);
            else
                f = 0;
        }
        else
        {
            if (c != 0)
                f = x / c;
            else
                f = 0;
        }
        if (((a || b) && (a || c)) != 0)
        {
            cout << "x = " << x << " f = " << f << endl;
        }
        else
        {
            int fc = c;
            cout << "x = " << x << " f = " << f << endl;
        }
        x = x + dx;
    }
    system("pause");
    return 0;
}
