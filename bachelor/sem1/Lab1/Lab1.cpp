// ЗАДАЧА 1-Я //
// Уберите  знак "/*" в начале кода и в конце для работы программы //
/*
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Исходные данные для типа float
    float a1 = 100.0f;
    float b1 = 0.001f;

    // Вычисление числителя
    float p1 = pow(a1 + b1, 4);
    float p2 = pow(a1, 4) + 4 * pow(a1, 3) * b1;
    float n1 = p1 - p2;

    // Вычисление знаменателя
    float d1 = 6 * a1 * a1 * b1 * b1
             + 4 * a1 * b1 * b1 * b1
             + pow(b1, 4);

    float f1 = n1 / d1;

    // Исходные данные для типа double
    double a2 = 100.0;
    double b2 = 0.001;

    // Вычисление числителя
    double p3 = pow(a2 + b2, 4);
    double p4 = pow(a2, 4) + 4 * pow(a2, 3) * b2;
    double n2 = p3 - p4;

    // Вычисление знаменателя
    double d2 = 6 * a2 * a2 * b2 * b2
              + 4 * a2 * b2 * b2 * b2
              + pow(b2, 4);

    double f2 = n2 / d2;

    // Вывод результатов
    cout << fixed << setprecision(12);

    cout << "float: " << f1 << endl;
    cout << "double: " << f2 << endl;

    return 0;
}
*/

// ЗАДАЧА 2-Я //

#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "enter M and N: ";
    cin >> m >> n;

    // 1. Вычисляем m - ++n
    int m1 = m, n1 = n;
    int r1 = m1 - ++n1;

    cout << "1) M - ++N = " << r1 << endl;

    // 2. Проверяем условие ++m > --n
    int m2 = m, n2 = n;

    if (++m2 > --n2)
    {
        cout << "2) ++M > --N: TRUE" << endl;
    }
    else
    {
        cout << "2) ++M > --N: FALSE" << endl;
    }

    // 3. Проверяем условие --n < ++m
    int m3 = m, n3 = n;

    if (--n3 < ++m3)
    {
        cout << "3) --N < ++M: TRUE" << endl;
    }
    else
    {
        cout << "3) --N < ++M: FALSE" << endl;
    }

    return 0;
}
