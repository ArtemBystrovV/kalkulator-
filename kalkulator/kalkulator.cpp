#include <iostream>
using namespace std;
int main()
{
    int Leave = 0;
    do {
        int Vibor;
        int a;
        int b;
        int c;
        cout << "1.Сложение \n2.Вычитание \n3.Умножение \n4.Деление \n5.Степень \n6.Квадратного корня \n7.1 процента от числа \n8.Факториал числа \n9.Выйти из программы";
        cin >> Vibor;
        switch (Vibor)
        {
        case 1:
            cout << "1 число ";
            cin >> a;
            cout << "2 число ";
            cin >> b;
            cout << "Результат: " << a + b << endl;
            break;
        case 2:
            cout << "1 число";
            cin >> a;
            cout << "2 число";
            cin >> b;
            cout << "Результат: " << a - b << endl;
            break;
        case 3:
            cout << "1 число ";
            cin >> a;
            cout << "2 число ";
            cin >> b;
            cout << "Результат: " << a * b << endl;
            break;
        case 4:
            cout << "1 число ";
            cin >> a;
            cout << "2 число";
            cin >> b;
            if (b == 0)
            {
                cout << "Неверное значение";
            }
            cout << "Результат: " << a / b << endl;
            break;
        case 5:
            cout << "Число ";
            cin >> a;
            cout << "Степень ";
            cin >> b;
            cout << "Результат: " << pow(a, b) << endl;
            break;
        case 6:
            cout << "Число ";
            cin >> a;
            if (a < 0) {
                cout << "Неверное значение ";
            }
            cout << "Результат: " << sqrt(a) << endl;
            break;
        case 7:
            cout << "Число ";
            cin >> a;
            cout << "Результат: " << a % 100 << endl;
            break;
        case 8:
            int result;
            cout << "Число ";
            cin >> a;
            if (a < 0) {
                cout << "Неверное значение " << endl;
            }
            else {
                result = 1;
                for (int i = 1; i <= a; i++) {
                    result *= i;
                }
                cout << "Результат: " << result << endl;
                break;
        case 9:
            cout << "Выход ";
            return 0;
            break;
            };
        }
    } while (Leave != 1);
}