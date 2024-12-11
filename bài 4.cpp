#include <stdio.h>

 int main() {
    float math, literature, english,sum;
    printf("hay nhap score math: ");
	scanf("%f",&math);
    printf("hay nhap score literature: ");
    scanf("%f",&literature);
    printf("hay nhap score english: ");
    scanf("%f",&english) ;
    printf("score sum: %.2f\n", math + literature + english);
    printf("score average: %.2f", (math + literature + english) / 3);
    return 0;

}
