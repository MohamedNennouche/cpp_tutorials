#include <iostream>

using namespace std;


int main()
{   
    const char *str = "Hello world";
    char str2[10] = {'C','o','u','c','o','u','\0'}; // il faut toujours finir la chaine de caractères avec le '\0' définissant la fin de la chaîne

    cout << str << endl;
    return 0;
}