int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    printf("\n-------------\n");
    while (n >= 0) {
        printf("%d\n", n);
        n--;
    }
    printf("Пуск!\n");

    return 0;
}
