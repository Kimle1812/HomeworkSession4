#include<stdio.h>
int main (){
	int a, b, c;
	printf("Nhap so nguyen thu nhat ");
	scanf("%d", &a);
	printf("Nhap so nguyen thu hai ");
	scanf("%d", &b);
	printf("Nhap so nguyen thu ba ");
	scanf("%d", &c);
	int index;
	if (a > b){
		index = a;
		a = b;
		b = index;
	}
	if (a > c){
		index = a;
		a = c;
		c = index;
	}
	if (b > c){
		index = b;
		b = c;
		c = index;
	}
	printf("Cac so theo thu tu tu be den lon la %d, %d, %d\n", a, b, c);
	return 0;
}
