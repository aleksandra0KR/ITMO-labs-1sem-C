#include <stdio.h>
#include <sys/stat.h>   // библиоткека для создания папки
#include <dirent.h>     // библиоткека для работы с каталогом

int main(int argc, char **argv) {

    for (int i = 1; i < argc; i++) {
        mkdir(argv[i], 0700); // создаем папки
    }


    DIR *directoty; // структура, содержащая информацию о каталоге
    directoty = opendir("/Users/aleksandrakr/Desktop/lab12/"); // открываем поток каталога и возвращает указатель на структура типа DIR,
                                                                                                // которая содержит информацию о каталоге

    struct dirent *filename = readdir(directoty);

    FILE *f = fopen("new.txt", "w"); // открываем файл в режиме записи

    int flg = 1;
    while (flg!= 0) {
        if (filename == NULL){  // если закончились файлы
            flg = 0;
        }
        else{
            if (filename->d_type == 4) { // если тип файла соответствует значению каталога
                fputs(filename->d_name, f); // записываем имя файла в файл
                fputs("\n", f);
            }
            filename = readdir(directoty); // считываем следующее значение
        }
    }

    fclose(f);  // закрываем файл
    closedir(directoty); // закрываем поток каталога, на который указывает указатель directory
    return 0;
}
