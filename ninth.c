#include <stdio.h>
#include <math.h>
int main() {
    // Задание 1
    char string[256]; // вводимая строка
    int i = 0; // указатель для отдельных символов в строке
    int counternumbers = 0; // счетчик цифр
    int counterlettersUP = 0; // счетчик прописных букв
    int counterletters  = 0; // счетчик строчных букв

    gets(&string); //просим ввести строку


    while (string[i]!='\0'){ // цикл, проходящийся по каждому символу строки
        if (48 <= string[i] && string[i] <= 57){ // условие для цифры
            counternumbers++;
        }
        else if (65 <= string[i] && string[i] <= 90){ // условие для прописных букв
            counterlettersUP++;
        }
        else if (97 <= string[i] && string[i] <= 122){ // условие для строчных цифр
            counterletters++;
        }
        i++;
    }

    // выводим знаечния счетчиков
    printf("Количество символоф цифр: %d\n", counternumbers);
    printf("Количество символоф строчных букв: %d\n", counterletters);
    printf("Количество символоф прописных букв: %d\n", counterlettersUP);

    // Задание 2

    int month; // кол-во месяцев
    float percent; // годовой процент
    float summa; // сумма на счете

    scanf("%d",&month); // вводим кол-во месяцев
    scanf("%f",&percent); // вводим годовой процент
    scanf("%f",&summa); // вводим начальную сумму на счете

    percent = percent / 12; // расчитываем ежемесячных процент

    for (int i = 0; i < month; i++){ // чиклом проходимся по каждому месяцу
        summa += summa / 100 * percent; // прибавляем ежемесячный процент к сумме на счете
        summa = floorf(summa*100) / 100;
        printf("Сумма на счете после %d мес %.2f\n", i+1, summa); // выводим сумму на счете в конце каждого месяца
    }

}
