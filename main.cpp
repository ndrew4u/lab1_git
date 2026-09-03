// Лабораторная работа № 1. Вариант 32.
// Выполнил: Иванов Андрей Александрович, группа ПИ-53.
#include <iostream>
#include<locale.h>
using namespace std;
const double g = 9.81;
// ===== Расчётные функции варианта =====
// Сила тяжести тела массой m
double gravityForce(double m) 
{
    return m * g;
}
double weightInLift(double m, double a)
{
    return m * (g + a);
}
// ===== Главная функция: меню =====
int main() {
    setlocale(LC_ALL, "RUS");
    int choice;
    double m;
    double a;
    do {
        cout << "\n*** Вариант 32: Сила тяжести***\n";
        cout << "1. Сила тяжести\n";
        cout << "2. Сила тяжести в лифте\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
        case 1:
        do
        {
            cout << "Введите массу m: ";
            cin >> m;
            if (m <= 0) { cout << "Попробуйте снова!\n"; }
        } while (m <= 0);
            cout << "Сила тяжести = " << gravityForce(m) << "\n";
            break;
        case 2:
        {
            do
            {
                cout << "Введите массу m: ";
                cin >> m;
                if (m <= 0) { cout << "Попробуйте снова!\n"; }
            } while (m <= 0);
            cout << "Введите ускорение лифта: ";
            cin >> a;
            cout << "Сила тяжести = " << weightInLift(m, a) << "\n";
        }
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}