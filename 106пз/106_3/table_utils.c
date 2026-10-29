#include <stdio.h>
#include "table_utils.h"

void print_multiplication_table(int n) {
    printf("\nТаблица умножения\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}
