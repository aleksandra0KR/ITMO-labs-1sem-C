#include <stdio.h>

int main() {
    char string[1000]; // массив для строки
    float floatnum; // переменная для вещественного числа
    printf("Введите строку "); // просим ввести строку
    scanf("%[^\n]s",string); //вводим строку
    printf("Ваша строка: "); // выводим на экран "Ваша строка"
    printf("%s\n",string); // выводим пользовательскую строку

    printf("Введите вещественное число "); // просим ввести вещ число
    scanf("%f",&floatnum); //сохраняем число в переменную
    printf("Ваше число: "); // выводим на экран "Ваше число"
    printf("%f",floatnum); // выводим число
    return 0;
}

