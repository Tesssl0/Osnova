#include <iostream>
#include <cmath>

using namespace std;

// Структура, представляющая прямоугольник

struct Rectangle {

    double width;
    double height;

};

// Функция для вычисления периметра прямоугольника

double calculatePerimeter(Rectangle rect) {

    return 2 * (rect.width + rect.height);

}

// Функция для вычисления площади прямоугольника

double calculateArea(Rectangle rect) {

    return rect.width * rect.height;

}

// Функция для вычисления длины диагонали прямоугольника

double calculateDiagonalLength(Rectangle rect) {

    return sqrt(rect.width * rect.width + rect.height * rect.height);

}

int main() {
    setlocale(LC_ALL, "Rus");
    Rectangle myRectangle;

    cout << "Введите ширину прямоугольника: ";
    cin >> myRectangle.width;

    cout << "Введите высоту прямоугольника: ";
    cin >> myRectangle.height;

    // Вычисление и вывод параметров прямоугольника
    cout << "Периметр прямоугольника: " << calculatePerimeter(myRectangle) << endl;
    cout << "Площадь прямоугольника: " << calculateArea(myRectangle) << endl;
    cout << "Длина диагонали прямоугольника: " << calculateDiagonalLength(myRectangle) << endl;
	
    return 0;
}