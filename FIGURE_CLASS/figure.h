#ifndef __FIGURE_H__
#define __FIGURE_H__

#include<iostream>

using namespace std;

class Figure{
public:
    virtual void draw();
    Figure();
    virtual ~Figure();
};

#endif //__FIGURE_H__