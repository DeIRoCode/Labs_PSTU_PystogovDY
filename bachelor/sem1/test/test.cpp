#include <iostream>
#include <locale.h>
using namespace std;

/*
int main() 
{
int a = 1;
switch (a) {
    case 1:
    a++;
    case 2:
    a++;
    case 3:
    ++a;
}
cout << "a = " << a;
}
*/


int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
   int n,max,j,S;
   cout << "введите последовтальеность - ";
   cin >> n;
   cout << "введите максимальный элемент - ";
   cin >> max;
   for (int i = 2; i <= n; i++)
   {
    int x;
    cout << "Введите соседний элемент - ";
    cin >> x;
    if (max < x)
    {
        max = x;
        j = i; 
    }
        else
            S = 1;
            S = S + 1;
   }
   cout << "max = " << max << " элемент порядка - "<< j << " Количество максимальных одинаковых элементов - "<< S << endl;
   return 0;
}