#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include<iostream>
#include"figure.h"
using namespace std;

class Rectangle:public Figure
{
public:
    virtual void draw();
    Rectangle();
    virtual ~Rectangle();
};

#endif //__RECTANGLE_H__