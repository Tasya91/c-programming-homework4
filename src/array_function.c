#include "../include/array_function.h"

#include <limits.h>

// Задание 1: Объединение двух массивов
void join_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    // Копируем элементы из первого массива
    for (size_t i = 0; i < size_src1; i++) {
        dest[i] = src1[i];
    }
    
    // Копируем элементы из второго массива после первого
    for (size_t i = 0; i < size_src2; i++) {
        dest[size_src1 + i] = src2[i];
    }
}

// Задание 2: Объединение и сортировка двух отсортированных массивов
void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    size_t i = 0, j = 0, k = 0;
    
    // Слияние двух отсортированных массивов
    while (i < size_src1 && j < size_src2) {
        if (src1[i] <= src2[j]) {
            dest[k++] = src1[i++];
        } else {
            dest[k++] = src2[j++];
        }
    }
    
    // Добавляем оставшиеся элементы из первого массива
    while (i < size_src1) {
        dest[k++] = src1[i++];
    }
    
    // Добавляем оставшиеся элементы из второго массива
    while (j < size_src2) {
        dest[k++] = src2[j++];
    }
}

// Задание 3: Поиск минимального и максимального значения в массиве
void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    if (size == 0) {
        // Если массив пустой, устанавливаем значения по умолчанию
        *min = 0;
        *max = 0;
        return;
    }
    
    // Инициализируем min и max первым элементом массива
    *min = src[0];
    *max = src[0];
    
    // Проходим по всем элементам массива
    for (size_t i = 1; i < size; i++) {
        if (src[i] < *min) {
            *min = src[i];
        }
        if (src[i] > *max) {
            *max = src[i];
        }
    }
}
