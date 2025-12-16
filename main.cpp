#include <iostream>
#include "rectangle.h"
#include <stdio.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    double sideA, sideB;

    cout << "Введите стороны прямоугольника:" << endl;
    cout << "Сторона a: ";
    cin >> sideA;

    cout << "Сторона b: ";
    cin >> sideB;

    // Проверка на корректность ввода
    if (sideA <= 0 || sideB <= 0) {
        cout << "Ошибка: стороны должны быть положительными числами!" << endl;
        return 1;
    }

    Rectangle rect(sideA, sideB);

    cout << "\nХарактеристики прямоугольника:" << endl;
    cout << "Периметр: " << rect.perimeter() << endl;
    cout << "Площадь: " << rect.area() << endl;
    cout << "Диагональ: " << rect.diagonal() << endl;

    return 0;
}