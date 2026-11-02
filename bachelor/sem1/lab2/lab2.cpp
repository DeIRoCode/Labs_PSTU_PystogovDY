#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double S = 0;           // сумма ряда
    double a;               // текущий член ряда
    double eps = 1e-4;      // точность ε = 0.0001
    int n = 1;              // номер члена ряда (начинаем с 1)

    cout << "Вычисление суммы ряда" << endl;
    cout << "a(n) = e^n * 100^(-n^2)" << endl;
    cout << "Точность: " << eps << endl;
    cout << "------------------------" << endl;

    do
    {
        a = exp(n) * pow(100.0, -n * n);  // вычисляем aₙ
        S += a;                            // добавляем к сумме
        cout << "n = " << n 
             << ", a = " << a 
             << ", S = " << S << endl;
        n++;
    } while (fabs(a) >= eps);  // пока |aₙ| >= ε

    cout << "------------------------" << endl;
    cout << "Сумма ряда S = " << S << endl;
    cout << "Вычислено членов ряда: " << n - 1 << endl;

    return 0;
}