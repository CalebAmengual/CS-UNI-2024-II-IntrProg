#include<iostream>
#include"figure.h"
#include"circle.h"
using namespace std;


void Circle::draw()
{
    Figure::draw();
    cout<<"Grafica un circulo/circle draw"<<endl;
}

Circle::Circle()
{
    cout<<"Construyendo circulo"<<endl;
}

Circle::~Circle()
{
    cout<<"Destruyendo circulo"<<endl;
}