#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(int argc, char *argv[]) {
    double a[N], r[N];
    int k = atoi(argv[1]);
    
    for (int i = 0; i < N; i++) scanf("%lf", &a[i]);
    
    k = ((k % N) + N) % N; // Нормализация K
    
    for (int i = 0; i < N; i++) 
        r[(i + k) % N] = a[i];
    
    for (int i = 0; i < N; i++) 
        printf("%.0f ", r[i]);
    
    return 0;
}