#include <iostream>
#include <cmath>

using namespace std;

void squar() {
    cout << "Введите стороны прямоугольника:";
    float a, b;
    if (cin >> a && cin >> b)
    {
        if (a < 0 || b < 0) {
        cout << "Длины сторон должны быть положительны \n";
        }
        else {
            cout << "Периметр = " << (a + b) * 2 << "\n";
            cout << "Площадь = " << a * b << "\n";
            cout << "Диагональ = " << sqrt(a * a + b * b) << "\n";
        }
    }
    else
        {
            cout << "Это должны быть числа\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
}

void trapezoid()
{
    float a, b, c, d;
    cout << "Введите стороны трапеции \n";
    if (cin >> a && cin >> b && cin >> c && cin >> d)
    {
        if (a < 0 || b < 0 || c < 0 || d < 0)
        {
            cout << "Стороны должны быть положительные \n";
        }
        else
        {
            cout << "Периметр: " << a + b + c + d << "\n";
            float h = sqrt(c * c - ((((a - b) * (a - b) + c * c - d * d)) / (2 * (a - b))) * ((((a - b) * (a - b) + c * c - d * d)) / (2 * (a - b))));
            cout << "Площадь: " << h * ((a + b) / 2) << "\n";
            cout << "Длина средней линии: " << (a + b) / 2 << "\n";
        }
    }
    else
    {
        cout << "Это должны быть числа\n";
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

void triangle()
{
    cout << "Введите стороны треугольника: ";
    float a, b, c;
    if (cin >> a && cin >> b && cin >> c)
    {
        if (a <= 0 || b <= 0 || c <= 0)
        {
            cout << "Стороны должны быть положительные";
        }
        else
        {
            cout << "Периметр: " << a + b + c << "\n";
            float p = (a + b + c) / 2;
            cout << "Площадь: " << sqrt(p * (p - a) * (p - b) * (p - c)) << "\n";
            if (a == b || b == c || a == c)
            {
                cout << "Треугольник равнобедренный \n";
            }
            else
            {
                cout << "Треугольник не равнобедренный \n";
            }
        }
    }
    else
    {
        cout << "Это должны быть числа\n";
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

int main()
{
    int number = -1;
    while (number != 0)
    {
        cout << "Выберите значение: \n 1. Прямоугольник \n 2. Треугольник \n 3. Трапеция \n 0. Для завершения работы программы \n";
        cin >> number;

        switch (number)
        {
        case 0:
            cout << "Завершаю работу \n";
            break;
        case 1:
            squar();
            break;
        case 2:
            triangle();
            break;
        case 3:
            trapezoid();
            break;
        default:
            cout << "Нет такой фигуры, введите другой номер \n";
            break;
        }
    }
} 
