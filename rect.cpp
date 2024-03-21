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
    Rectangle myRectangle;

    cout << "Enter the width of the rectangle: ";
    cin >> myRectangle.width;

    cout << "Enter the height of the rectangle: ";
    cin >> myRectangle.height;

    // Вычисление и вывод параметров прямоугольника
    cout << "Perimeter of the rectangle: " << calculatePerimeter(myRectangle) << endl;
    cout << "Area of the rectangle: " << calculateArea(myRectangle) << endl;
    cout << "Diagonal length of the rectangle: " << calculateDiagonalLength(myRectangle) << endl;

    return 0;
}