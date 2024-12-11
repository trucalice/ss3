#include <stdio.h>
#include <string.h>

int main() {
    char number[5];
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%4s", number);
    while (getchar() != '\n');
    if (strlen(number) != 4) {
        printf("Ban phai nhap dung 4 chu so!\n");
        return 1;
    }
    int total = 0;
    for (int i = 0; i < 4; i++) {
        if (number[i] < '0' || number[i] > '9') {
            printf("Vui long chi nhap so nguyen!\n");
            return 1;
        }
        total += number[i] - '0';
}
    printf("Tong cac chu so %s la: %d\n", number, total);
    return 0;
}

