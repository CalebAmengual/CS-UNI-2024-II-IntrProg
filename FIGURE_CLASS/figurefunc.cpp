#include<iostream>
#include"figurefunc.h"

using namespace std;

void fX(Figure *pf)
{
    fY(*pf);
}

void fY(Figure &rf)
{
    rf.draw();
}