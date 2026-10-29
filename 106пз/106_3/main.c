#include <stdio.h>
#include "table_utils.h"

int main() {
    int n;

    printf("Введите число: ");
    scanf("%d", &n);
    print_multiplication_table(n);

    return 0;
}
