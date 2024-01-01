#include <stdio.h>
#include <limits.h> //підключення бібліотек
#include <stdlib.h>

int main() {

    int n;// значення змінної для розміру масиву
    printf("Veit number :"); //розмір масиву
    scanf_s("%d", &n);

    // Виділення динамічної пам'яті для масиву
    int* array = (int*)malloc(n * sizeof(int));

    printf("Vedit elementu masuvy:\n");//введення елементів масиву
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }
    // оголошення змінних з початковим значенням 1 елементу
    int min = array[0];
    int max = array[0];
    

    // обчислення мінімуму та максимуму
    for (int i = 1; i < n; i++) {
        if (array[i] < min) {
            min = (array[i]); // пошук мінімального
        }
           
         if (array[i] > max) {
            max = (array [i]);  // пошук максимального  
        }
    }
    printf("Min: %d\n", min); // вивід
    printf("Max: %d\n", max);
    // Звільнення виділеної пам'яті
    free(array);

    return 0;
}