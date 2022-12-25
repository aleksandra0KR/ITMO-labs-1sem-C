#include  "main.h"

float squrt(struct Rhomb Rh) { // функция расчета периметра
    float d1 = sqrt(pow(Rh.x3-Rh.x1,2)+pow(Rh.y3-Rh.y1,2));
    float d2 = sqrt(pow(Rh.x4-Rh.x2,2)+pow(Rh.y4-Rh.y2,2));
    return (d1*d2)/2;
}

float perimeter(struct Rhomb Rh) { // функция расчета периметра
    float a = sqrt(pow(Rh.x2-Rh.x1,2)+pow(Rh.y2-Rh.y1,2));
    float b = sqrt(pow(Rh.x3-Rh.x2,2)+pow(Rh.y3-Rh.y2,2));
    float c = sqrt(pow(Rh.x4-Rh.x3,2)+pow(Rh.y4-Rh.y3,2));
    float d = sqrt(pow(Rh.x1-Rh.x4,2)+pow(Rh.y1-Rh.y4,2));
    return a+b+c+d;
}