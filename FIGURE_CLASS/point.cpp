#include<iostream>
#include"figure.h"
#include"point.h"
using namespace std;


void Point::draw()
{
    Figure::draw();
    cout<<"Grafica un punto/point draw"<<endl;
}

Point::Point()
{
    cout<<"Construyendo punto"<<endl;
}

Point::~Point()
{
    cout<<"Destruyendo punto"<<endl;
}