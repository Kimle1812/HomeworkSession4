#include<stdio.h>
int main (){
	int num1, num2, num3;
	printf("Nhap so nguyen thu nhat ");
	scanf("%d", &num1);
	printf("Nhap so nguyen thu hai ");
	scanf("%d", &num2);
	printf("Nhap so nguyen thu ba ");
	scanf("%d", &num3);
	int index;
	if (num1 > num2){
		index = num1;
		num1 = num2;
		num2 = index;
	}
	if (num1 > num3){
		index = num1;
		num1 = num3;
		num3 = index;
	}
	if (num2 > num3){
		index = num2;
		num2 = num3;
		num3 = index;
	}
	printf("Cac so theo thu tu tu be den lon la %d, %d, %d\n", num1, num2, num3);
	return 0;
}
