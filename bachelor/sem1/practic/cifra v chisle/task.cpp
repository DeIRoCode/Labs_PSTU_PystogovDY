#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n, z;
    bool f = false;  // флажок

    cout << "Введите число n: ";
    cin >> n;
    cout << "Введите цифру z: ";
    cin >> z;

    // Поисковый цикл
    while ((n > 0) && !f)
    {
        if (n % 10 == z)  // если последняя цифра равна z
        {
            f = true;     // ставим флажок
        }
        n = n / 10;       // отбрасываем последнюю цифру
    }

    if (f)
    {
        cout << "Цифра " << z << " есть в числе" << endl;
    }
    else
    {
        cout << "Цифры " << z << " нет в числе" << endl;
    }

    return 0;
}