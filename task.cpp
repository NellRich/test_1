#include <iostream>
#include <cmath>

using namespace std;

void getValue(double &value, const char *outputText)
{
    cout << outputText;
    cin >> value;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double xnach, xkon, dx, a, b, c, x, f;

    getValue(xnach, "Введите начальное значение х: ");
    getValue(xkon, "\nВведите конечное значение х: ");
    getValue(dx, "\nВведите значение шага: ");
    getValue(a, "\nВведите значение a: ");
    getValue(b, "\nВведите значение b: ");
    getValue(c, "\nВведите значение c: ");
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
            cout << "Знаменатель равен нулю. Функция не корректна\n";
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
