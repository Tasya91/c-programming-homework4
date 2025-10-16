#include <stdio.h>

#define SIZE 10

int main() {
    double numbers[SIZE];
    
    // Читаем 10 чисел
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &numbers[i]);
    }
    
    // Выводим массив в обратном порядке
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%.0f", numbers[i]);  // %.0f - без дробной части
        if (i > 0) {
            printf(" ");  // добавляем пробел между числами, кроме последнего
        }
    }
    printf("\n");
    
    return 0;
}