#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double A, B, C;

    cout << "Введите A: ";
    cin >> A;
    cout << "Введите B: ";
    cin >> B;
    cout << "Введите C: ";
    cin >> C;

    if (A <= 0)
    {
        cout << "Треугольник не существует" << endl;
        return 0;
    }
    if (B <= 0)
    {
        cout << "Треугольник не существует" << endl;
        return 0;
    }
    if (C <= 0)
    {
        cout << "Треугольник не существует" << endl;
        return 0;
    }
    if (A + B <= C)
    {
        cout << "Треугольник не существует" << endl;
        return 0;
    }
    if (A + C <= B)
    {
        cout << "Треугольник не существует" << endl;
        return 0;
    }
    if (B + C <= A)
    {
        cout << "Треугольник не существует" << endl;
        return 0;
    }

    cout << "Треугольник существует" << endl;

    if (A == B)
    {
        if (B == C)
        {
            cout << "Равносторонний" << endl;
        }
        else
        {
            cout << "Равнобедренный" << endl;
        }
    }
    else
    {
        if (B == C)
        {
            cout << "Равнобедренный" << endl;
        }
        else
        {
            if (C == A)
            {
                cout << "Равнобедренный" << endl;
            }
            else
            {
                cout << "Разносторонний" << endl;
            }
        }
    }

    return 0;
}   