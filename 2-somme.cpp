#include <iostream>

double somme(double a, double b);

int main()
{
    int a, b;

    std::cout << "Donnez deux entiers" << std::endl;
    std::cin >> a >> b;
    std::cout << a << " + " << b << " = " << somme(a,b) << std::endl;

    return 0;
}

double somme(double a, double b)
{
    return a + b;
}
