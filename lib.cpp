//
// Created by Hp on 06/12/2022.
//

#include "lib.h"

bool vero_falso(char a)
{
    int b;
    b=(int)a;
    if (b>=65 & b<=90 || b>=97 & b<=122)
        return true;
    else return false;
}
char lettera(char a)
{
    int b;
    b=(int)a;
    int c=0;
    if (b>= 97 && b<=122)
    {
        c=b-32;
    }
    else if(b>=65 && b<=90)
    {
        c=b+32;
    }
    return c;
}
