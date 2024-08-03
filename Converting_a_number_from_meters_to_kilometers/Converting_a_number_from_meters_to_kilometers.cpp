#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    float m,a = 1000;
    std::cout << "Перевод метров в километры\n";
    std::cout << "Введите метры: \n";
    std::cin >> m;
    std::cout << m << " метров это " << m / a << " километров.\n";
    return 0;
}