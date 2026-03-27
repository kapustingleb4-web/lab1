#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;

    cout << "Введите три числа (стороны треугольника): ";
    cin >> a >> b >> c;
    
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Ошибка: стороны треугольника должны быть положительными числами!" << endl;
        return 1;
    }

    //Проверка на треугольник
    if (a + b > c && a + c > b && b + c > a) {
        cout << "\nИз введенных чисел можно составить треугольник." << endl;
        
        double perimeter = a + b + c;
        cout << "Периметр треугольника: " << fixed << setprecision(2) << perimeter << endl;

        double p = perimeter / 2; // полупериметр
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Площадь треугольника (по формуле Герона): " << fixed << setprecision(2) << area << endl;
        
        if (a == b || a == c || b == c) {
            cout << "Треугольник является равнобедренным." << endl;

            if (a == b && b == c) {
                cout << "Треугольник также является равносторонним." << endl;
            }
        } else {
            cout << "Треугольник не является равнобедренным." << endl;
        }
        
    } else {
        cout << "\nОшибка: из введенных чисел нельзя составить треугольник!" << endl;
        cout << "Нарушено неравенство треугольника." << endl;
    }
    
    return 0;
}
