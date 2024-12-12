#include<stdio.h>
#include <string.h>

int main() {
    char number[4];
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%4s", number);
    int reversedNumber = (number[3] - '0') * 1000 
                       + (number[2] - '0') * 100 
                       + (number[1] - '0') * 10 
                       + (number[0] - '0');
    printf("So nghich dao la: %d\n", reversedNumber);                   
return 0;
}
