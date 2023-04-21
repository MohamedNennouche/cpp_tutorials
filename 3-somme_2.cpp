#include <iostream>

using namespace std;

double somme(double a, double b);

int main()
{
    int a, b;

    cout << "Donnez deux entiers" << endl;
    cin >> a >> b;
    cout << a << " + " << b << " = " << somme(a,b) << endl;

    return 0;
}

double somme(double a, double b)
{
    return a + b;
}
