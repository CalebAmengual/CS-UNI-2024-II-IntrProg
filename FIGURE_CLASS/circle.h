#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include<iostream>
#include"figure.h"
using namespace std;

class Circle:public Figure
{
public:
    virtual void draw();
    Circle();
    virtual ~Circle();
};

#endif //__CIRCLE_H__