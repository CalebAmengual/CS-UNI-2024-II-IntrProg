#include<iostream>
#include"figure.h"
#include"rectangle.h"
#include"circle.h"
#include"point.h"
#include"figuredemo.h"

using namespace std;

void DemoFig1()
{
    Figure* pvFig = new Figure[3];
    new (pvFig + 0) Rectangle();
    new (pvFig + 1) Circle();
    new (pvFig + 2) Point();

    for (auto i = 0; i < 3; i++)
    {
        fY(pvFig[i]);  
    }
    
    (static_cast<Rectangle*>(pvFig + 0))->~Rectangle();       //formas recomendadas por Gemini
    (static_cast<Circle*>(pvFig + 1))->~Circle();
    (static_cast<Point*>(pvFig + 2))->~Point();


    delete[] pvFig;
    pvFig = nullptr;
}
