#include<iostream>
#include"figure.h"
#include"rectangle.h"
using namespace std;


void Rectangle::draw()
{
    Figure::draw();
    cout<<"Grafica un rectangulo/rectangle draw"<<endl;
}
Rectangle::Rectangle()
{
    cout<<"Construyendo rectangulo"<<endl;
}

Rectangle::~Rectangle()
{
    cout<<"Destruyendo rectangulo"<<endl;
}