#include <iostream>
#include <cmath>
using namespace std;


double square( double StoronaA, double StoronaB){
	return StoronaA * StoronaB;
}

double perimetr( double StoronaA, double StoronaB){
	return ( StoronaA + StoronaB) *  2;
}

double diagonal( double StoronaA, double StoronaB){
	return sqrt( pow( StoronaA, 2) + pow(StoronaB, 2));
}


int rectangle(){
	double StoronaA,StoronaB;
	cout << "Сторона А:" << endl;
	cout << "Сторона Б:" << endl;
	cin >> StoronaA;
	cin >> StoronaB;

	if (!cin.fail() && StoronaA > 0 && StoronaB > 0){
		cout << "---Прямоугольник---" << endl; 
	 	cout << " Площадь: " << square(StoronaA, StoronaB) << endl;
		cout << " Периметр: " << perimetr(StoronaA, StoronaB) << endl;
		cout << " Диагональ: " << diagonal(StoronaA, StoronaB) << endl;
	}  else {
		cout << "ошибка,введите положитетельную  цифру" << endl;
	}
	return 0;
}



int main() {
    cout << "Выберите фигуру \n 1. Прямоугольник \n";
    int number;
    cin >> number;
    switch(number) {
        case 1:
        rectangle();
        break;
        default:
        cout << "Нет такой фигуры \n";
        break;
    }

    return 0;
}
