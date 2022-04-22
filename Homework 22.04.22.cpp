#include <iostream>
using namespace std;

int main()
{
    /*setlocale(0, "UKR");
    int a;
    int b;
    
    cout << "Укажите значение для a в уравнении ax + b = 0: ";
    cin >> a;
    cout << "Укажите значение для b в уравнении ax + b = 0: ";
    cin >> b;

    cout <<"\nx линейного уравнения " << a << "x + " << b << " равен: " << -b / a << "\n";*/

    /*setlocale(0, "UKR");
    int number;
    int power;

    cout << "Введите число: ";
    cin >> number;
    cout << "Укажите степень: ";
    cin >> power;

    cout << "\nСтепень числа: " << pow(number, power) << "\n";*/

    /*setlocale(0, "UKR");
    float celcius;
    cout << "Укажите температуру в градусах Цельсия: ";
    cin >> celcius;

    float fahrenheit = (celcius - 32) * 5 / 9;
    float kelvin = celcius + 273.15;
    float reaumur = celcius * 0.8;
    float delisle = (100 - celcius) * 3 / 2;
    
    cout << "\nГрадусы Фаренгейта: " << fahrenheit << "\nГрадусы Кельвина: " << kelvin << "\nГрадусы по Реомюру: " << reaumur << "\nГрадусы Делиля: " << delisle << "\n";*/

    /*setlocale(0, "UKR");                             // С дополнительной переменной
    int a;
    int b;

    cout << "Укажите значение переменной a: ";
    cin >> a;
    cout << "Укажите значение переменной b: ";
    cin >> b;

    int c;

    c = a;
    a = b;
    b = c;

    cout << "\nПеременная a: " << a << "\nПеременная b: " << b;*/

    setlocale(0, "UKR");                             // Без дополнительной переменной
    int a;
    int b;

    cout << "Укажите значение переменной a: ";
    cin >> a;
    cout << "Укажите значение переменной b: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nПеременная a: " << a << "\nПеременная b: " << b << "\n";
}

