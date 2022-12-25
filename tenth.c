#include <stdio.h>

int evclid_greatest_common_divisor(int firstnumber, int secondnumber) { // алгоритм Евклида для нахождения НОД

    if (firstnumber % secondnumber == 0) // если firstnumber  // secondnumber без остатка secondnumber - НОД
        return secondnumber; // возвращаем secondnumber

    if (secondnumber % firstnumber == 0) // если secondnumber  // firstnumber без остатка firstnumber - НОД
        return firstnumber; // возвращаем firstnumber

    if (firstnumber > secondnumber) // если firstnumber > secondnumber передаем в функцию вместо firstnumber остаток от деления firstnumber на secondnumber
        return evclid_greatest_common_divisor(firstnumber%secondnumber, secondnumber);

    return evclid_greatest_common_divisor(firstnumber, secondnumber%firstnumber); // если secondnumber > firstnumber передаем в
                                                                                    // функцию вместо secondnumber остаток от деления secondnumber на firstnumber
}

int evclid_least_common_multiple(int firstnumber, int secondnumber) { // алгоритм Евклида для нахождения НОК
    return (firstnumber * secondnumber) / evclid_greatest_common_divisor(firstnumber,secondnumber);
}


char erasewhitespace(char str[], int ind, int counter) // рекрсивная функция удаления лишних пробелов
{
    int i = ind; // индекс для нахождения подходящег значения
    int j = ind; // индекс для вставки в исходный массив
    if (str[ind] == '\0'){ // если конец строки, возвращаем строку
        return str;
    }
    if (str[ind] == '"' && str[ind+1] != '\0' && str[ind+1] == ' ' && counter%2!=0 ){ // если парный знак препинания "
        i++;
        counter++;
        while (str[i]==' '){ // находим индекс эл-та, который не пробел
            i++;
        }
        while (str[i]!='\0'){ // удаляем пробелы, сдвигая массив
            str[j+1]= str[i];
            str[i] = '\0';
            i++;
            j++;

        }}

    if ((str[ind] == '(' || str[ind] == '[' || str[ind] == '{') && str[ind+1] != '\0' && str[ind+1] == ' ' ){ // если другие парные знак препинания
        i++;
        counter++;
        while (str[i]==' '){ // находим индекс эл-та, который не пробел
            i++;
        }
        while (str[i]!='\0'){ // удаляем пробелы, сдвигая массив
            str[j+1]= str[i];
            str[i] = '\0';
            i++;
            j++;

        }}

    else if(str[ind+1] != '\0' && str[ind+2] != '\0' && str[ind] == ' ' && str[ind+1] == ' ' && str[ind+2] == ' '){ // если больше 2 пробелов
        while (str[i]==' '){ // находим индекс эл-та, который не пробел
            i++;
        }
        if (str[i]=='\0') str[ind] = '\0'; // если это конец строки - убираем все пробелы в конце
        else if (ind == 0){ // если начало строки
            while (str[i]!='\0'){ //удаляем все пробелы
                str[j]= str[i];
                str[i] = '\0';
                i++;
                j++;

            }}
        else{ while (str[i]!='\0'){ // иначе удаляем пробелы, сдвигая массив
                str[j+2]= str[i];
                str[i] = '\0';
                i++;
                j++;

            }}}
    erasewhitespace(str,ind+1, counter); // удаляем последующие пробелы
}

int main() {
    // Задание 1
    int firstnumber;
    int secondnumber;

    scanf("%d",&firstnumber); // вводим firstnumber
    scanf("%d",&secondnumber); // вводим secondnumber

    printf("НОД: %d ", evclid_greatest_common_divisor( firstnumber,  secondnumber)); // выводим нод
    printf("НОК: %d\n", evclid_least_common_multiple( firstnumber,  secondnumber)); // выводим нок

    // Задание 2
    char string[256]; // строка с пробелами
    getchar();
    gets(string); // вводим строку
    int counter = 1;
    erasewhitespace(string,0,counter); // удаляем лишние пробелы
    printf("%s",string); // выводим строку без лишних пробелов

    return 0;
}
