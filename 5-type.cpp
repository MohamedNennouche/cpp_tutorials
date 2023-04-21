#include <iostream>

using namespace std;

int main()
{
    int a; 
    unsigned int b; 
    char c;
    double reel1, reel2;

    a = 0; 
    b = -1; // ca va donner un résultat totalement incohérent
    c = 'a';
    reel1 = 1e4;
    reel2 = 0.001; 

    cout << "a : " << a << endl;
    cout << "b : " << b << endl; // en dehors de la plage des valeurs et donc va donner une valeur incohérente
    cout << "c : " << c << endl;
    cout << reel1 << endl;
    cout << reel2 << endl; 
    return 0;
}