#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(int argc, char *argv[]) {
    double a[N], x = atof(argv[1]);
    int k = atoi(argv[2]);
    
    for (int i = 0; i < N; i++) scanf("%lf", &a[i]);
    
    // Сдвигаем элементы вправо начиная с позиции K
    for (int i = N - 1; i > k; i--) 
        a[i] = a[i - 1];
    
    a[k] = x; // Вставляем X на позицию K
    
    for (int i = 0; i < N; i++) 
        printf("%.0f ", a[i]);
    
    return 0;
}