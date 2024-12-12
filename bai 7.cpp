#include <stdio.h>
#include <string.h>

int main() {
    char number[5];
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%4s", number);
    int n = (number[0] - '0') + (number[1] - '0') + (number[2] - '0') + (number[3] - '0');
    printf("tong cac chu so %s la: %d\n", number, n);
    
    return 0;
}

