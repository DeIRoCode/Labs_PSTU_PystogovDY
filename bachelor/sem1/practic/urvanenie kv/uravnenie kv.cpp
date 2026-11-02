#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double A, B, C;

    cout << "Коэффициент A: ";
    cin >> A;
    cout << "Коэффициент B: ";
    cin >> B;
    cout << "Коэффициент C: ";
    cin >> C;

    if (A == 0)
    {
        if (B == 0)
        {
            if (C == 0)
            {
                cout << "Бесконечное множество решений" << endl;
            }
            else
            {
                cout << "Нет решений" << endl;
            }
        }
        else
        {
            double X;
            X = -C / B;
            cout << "Лин. уравнение X = " << X << endl;
        }
    }
    else
    {
        double D;
        D = B * B - 4 * A * C;

        if (D > 0)
        {
            double X1, X2;
            X1 = (-B + sqrt(D)) / (2 * A);
            X2 = (-B - sqrt(D)) / (2 * A);
            cout << "Два корня" << endl;
            cout << "X1 = " << X1 << endl;
            cout << "X2 = " << X2 << endl;
        }
        else if (D == 0)
        {
            double X;
            X = -B / (2 * A);
            cout << "Один корень" << endl;
            cout << "X = " << X << endl;
        }
        else
        {
            cout << "Нет действ. корней" << endl;
        }
    }

    return 0;
}