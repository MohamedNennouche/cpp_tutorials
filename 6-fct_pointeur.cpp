#include <iostream>

using namespace std;

double fct1(double x)
{
    return x*x;
}

double fct2(double x)
{
    return 2*x;
}

// ca utilise un pointeur de fonction (qui prend un double comme paramètre)
void apply(double *val, int n, double (*fct)(double)) 
{
    for(int i = 0; i < n; i++)
    {
        val[i] = (*fct)(val[i]);
    }
}

void aff_tab(double *val, int n) // tableau est un pointeur
{
    for(int i = 0; i < n; i++)
    {
        cout << i << " : " << val[i] << endl;
    }
}

int main()
{
    double t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    aff_tab(t, 10);
    apply(t, 10, fct1);
    aff_tab(t, 10);
    return 0;
}