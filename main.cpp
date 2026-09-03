// Лабораторная работа № 1. Вариант 32.
// Выполнил: Иванов Андрей Александрович, группа ПИ-53.
#include <iostream>
#include<locale.h>
using namespace std;
// ===== Расчётные функции варианта =====
// Сила тяжести тела массой m
double gravityForce(double m) {
    const double g = 9.81;
    return m * g;
}
// ===== Главная функция: меню =====
int main() {
    setlocale(LC_ALL, "RUS");
    int choice;
    double m;
    do {
        cout << "\n*** Вариант 32: Сила тяжести***\n";
        cout << "1. Сила тяжести\n";
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
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}