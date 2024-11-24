#include<stdio.h>
int main(){
	int y;
	printf("Moi ban nhap so nam ");
	scanf("%d", &y);
	if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
		printf("Nam ban nhap la nam nhuan\n"); 
	} else {
		printf("Nam ban nhap khong phai la nam nhuan\n"); 
	}
	return 0; 
} 
