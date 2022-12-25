#include <stdio.h>
#include <stdlib.h>

enum Musictype { // перечисляемый тип данных
    CLASSIC,
    POP,
    ROCK,
    RAP,
    NEWAGE,
    ELECTRONIC
};

struct Triangle{ // структура для треугольника
    // коодринаты тругольника
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    void (*squareoftriangle)(struct Triangle*); // указатель на функцию расчета площади
};

void square(struct Triangle *Triangleobj) { // функция расчета площади

    float res = 0.5 * (abs((Triangleobj->x2-Triangleobj->x1)*(Triangleobj->y3-Triangleobj->y1) - (Triangleobj->x3-Triangleobj->x1)*(Triangleobj->y2-Triangleobj->y1)));
    printf("%f\n", res);
}

union { // обединение
    struct {
        unsigned char Turnon : 1;
        unsigned char SDcard : 1;
        unsigned char CompactFlashcard : 1;
        unsigned char MemoyStick : 1;
    };
    int consideration;
} Cardreader;

int main() {

    // Задание 1
    enum Musictype newval;
    newval = ROCK;
    printf("a = %d\n", newval); // значение целого числа, соответствующее ROCK

    // Задание 2
    struct Triangle triangleobj = {2,-3,1,1,-6,5,&square}; //Указываем данные для расчета в тексте программы
    triangleobj.squareoftriangle(&triangleobj); // выводим результат расчета

    // Задание 3
    scanf("%x", &Cardreader.consideration);
    //выводим состояние элементов прибора
    Cardreader.Turnon ? printf("%s","Card is on\n") : printf("%s","Card is off\n");
    Cardreader.SDcard ? printf("%s","SDcard is on\n") : printf("%s","SDcard is off\n");
    Cardreader.SDcard ? printf("%s","CompactFlashcard is on\n") : printf("%s","CompactFlashcard is off\n");
    Cardreader.SDcard ? printf("%s","MemoyStick is on\n") : printf("%s","MemoyStick is off\n");

    return 0;
}











