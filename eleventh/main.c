#include "main.h"


int main(){
    struct Rhomb phombobject = {0,2,2,0,0,-2,-2, 0}; // задаем координаты ромбу
    printf("%f\n", squrt(phombobject)); // выводим площадь ромба
    printf("%f", perimeter(phombobject)); // выводим периметр ромба
    return 0;
}