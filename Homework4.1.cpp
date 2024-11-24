#include<stdio.h>
int main(){
	int number; 
	printf("Moi ban nhap mot con so: ");
	scanf("%d", &number);
	if(number >= 0){
		printf("So ban nhap la so duong");
	}else{
		printf("So ban nhap la so am");
	};
	return 0;
} 
