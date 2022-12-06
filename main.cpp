#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
    int b=0;
    char a=0;
    cin >> a;
    if (vero_falso(a)== true)
    {
        cout << lettera (a)<< endl;
    }
    else
    {
        cout << "errore"<< endl;
    }
    return 0;
}
