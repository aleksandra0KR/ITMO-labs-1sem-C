#include <stdio.h>
int main()
{
    int a;

    scanf("%d", &a);
    printf("число %d принадлежит отрезку от -4 до -1? ",a);
    printf("%s", ((-4 < a) &&(a < -1)) ? "Да\n" : "Нет\n"); //проверка попадания в диапазон от -4 до -1
    int x;
    scanf("%d",&x);
    printf("в числе %d есть 15 бит? ",x);
    printf("%s", (((x & (1 << 15)) !=0) ? "Да" : "Нет" )); // проверка на наличие 15 бита
}


