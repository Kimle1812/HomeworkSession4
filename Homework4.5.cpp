#include<stdio.h>
int main (){
	int a, b, c;
	printf("Moi ban nhap so thu nhat ");
	scanf("%d", &a);
	printf("Moi ban nhap so thu hai ");
	scanf("%d", &b);
	printf("Moi ban nhap so thu ba ");
	scanf("%d", &c);
	if(a < c < b){
		printf("So thu ba ban nhap thuoc khoang %d va %d\n", a, b); 
	}else{
		printf("So thu ba ban nhap khong thuoc khoang %d va %d\n", a, b);
	}
	return 0; 
} 
