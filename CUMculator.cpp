#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    int func;
    int num1, num2, result;

    while (true) 
    {
        cout << " =====================================================\n";
        cout << " ДОБРО ПОЖАЛОВАТЬ В КАЛЬКУЛЯТОР\n";
        cout << " =====================================================\n";
        cout << " В данном калькуляторе есть выбор нескольких функций:\n";
        cout << " 1.Сложение\n 2.Вычитание\n 3.Умножение\n 4.Деление\n 5.Возведение в степень\n 6.Нахождения квадратного корня из числа\n 7.Нахождение 1 процента от числа\n 8.Найти факториал числа\n 9.Выйти из программы.\n";
        cin >> func;

        if (func == 9) {
            cout << "Пока-пока!!!" << endl;
            break;
        }

        switch (func) 
        {
        case 1:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Сумма чисел = " << result << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Разность чисел = " << result << endl;
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Произведение чисел = " << result << endl;
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            if (num2 == 0) {
                cout << "Вы чево.. делить на ноль нельзя :(" << endl;
            }
            else {
                result = num1 / num2;
                cout << "Результат деления чисел =  " << result << endl;
            }
            break;
        case 5:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Введите степень: ";
            cin >> num2;
            result = pow(num1, num2);
            cout << "Результат возведения в степень: " << result << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            if (num1 < 0) {
                cout << "Вы чево.. нельзя найти квадратный корень из отрицательного числа!" << endl;
            }
            else {
                result = sqrt(num1);
                cout << "Квадратный корень: " << result << endl;
            }
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            result = num1 / 100;
            cout << "Результат: " << result << endl;
            break;
        case 8:
            cout << "Введите !целое НЕотрицательное! число: ";
            cin >> num1;
            result = 1;
            for (int i = 1; i <= num1; i++) {
                result *= i;
            }
            cout << "Факториал числа =  " << result << endl;
            break;
        default:
            cout << "Упс.. попробуйте еще раз" << endl;
            break;
        }
    }

    return 0;
}