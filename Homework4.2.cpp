#include<stdio.h>
int main(){
	int number; 
	printf("Moi ban nhap mot con so: ");
	scanf("%d", &number);
	if(number % 2 == 0){
		printf("So ban nhap la so chan");
	}else{
		printf("So ban nhap la so le");
	};
	return 0;
} 
