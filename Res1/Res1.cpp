#include <iostream>

using namespace std;

int main()
{
    // Целочисленные типы
    char charVar = 'a';                         // от -2^7 до 2^7 - 1
    unsigned char unsignedCharVar = 'b';        // от 0 до 2^8 - 1
    short shortVar = 1;                         // от -2^15 до 2^15 - 1
    unsigned short unsignedShortVar = 6;        // от 0 до 2^16 - 1
    int intVar = 2;                             // от -2^31 до 2^31 - 1
    unsigned int unsignedIntVar = 5;            // от 0 до 2^32 - 1
    long longVar = 3;                           // от -2^31 до 2^31 - 1 (32-бит), от -2^63 до 2^63 - 1 (64-бит)
    unsigned long unsignedLongVar = 7;          // от 0 до 2^32 - 1 (32-бит), от 0 до 2^64 - 1 (64-бит)
    long long longLongVar = 4;                  // от -2^63 до 2^63 - 1
    unsigned long long unsignedLongLongVar = 8; // от 0 до 2^64 - 1

    // Типы с плавающей точкой
    float floatVar = 9.0;             // Примерно 6-7 десятичных цифр точности, диапазон ~1.2E-38 до 3.4E+38
    double doubleVar = 10.0;          // Примерно 15-16 десятичных цифр точности, диапазон ~2.3E-308 до 1.7E+308
    long double longDoubleVar = 11.0; // Точность и диапазон зависят от реализации, может превышать double

    // Логический тип
    bool boolVar = true; // Может принимать значения true (1) или false (0)

    int n;
    cin >> n;
    cout << n * n * 3.1415f;
    return 0;
}