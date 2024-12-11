#include<stdio.h>
#include<math.h>

int main(){
	int R;
	float Pi = 3.14;
    printf("hay nhap ban kinh: ");
	scanf("%d",&R);
    printf ("chu vi: %.2f\n", 2 * Pi * R);
    printf ("dien tich: %.2f\n",Pi * pow(R,2));
    return 0;
}
