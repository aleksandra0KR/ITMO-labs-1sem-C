#include <stdio.h>
int main()
{
    // создаем массив из 7 элементов
    int arr[7] = {23,5678, 2,564,365,77,443};
    //выводим массив
    for (int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("%i - %d\n",i,arr[i]);
    }

    int matr1[2][2] = {{1,1},{1,4}}; //первая матрица
    int matr2[2][2] = {{1,2},{4,1}}; //вторая матрица
    int newmatr[2][2] = {{0,0},{0,0}};; //матрица - результат

    //цикл умножения
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++) {
            for (int y = 0; y < 2; y++) {
                newmatr[i][j] += matr1[i][y] * matr2[y][j];
            }
        }
    }
    //вывеодим результат
    printf("\n");
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++) {
            printf("%d ", newmatr[i][j]);

        }
        printf("\n");
    }
    
}
