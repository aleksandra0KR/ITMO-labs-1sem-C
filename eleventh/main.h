#ifndef UNTITLED5_MAIN_H
#define UNTITLED5_MAIN_H
#include <stdio.h>
#include <math.h>

struct Rhomb { // структура, описывающая ромб с помощью координат
    // коодринаты ромба
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int x4;
    int y4;
};

float perimeter(struct Rhomb); // прототип функции расчета периметра
float squrt (struct Rhomb); // прототип функции расчета площади
#endif //UNTITLED5_MAIN_H
