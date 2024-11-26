#ifndef __POINT_H__
#define __POINT_H__

#include<iostream>
#include"figure.h"
using namespace std;

class Point:public Figure
{
public:
    virtual void draw();
    Point();
    virtual ~Point();
};

#endif //__POINT_H__