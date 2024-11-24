#include<stdio.h>
int main(){
	int number; 
	printf("Moi ban nhap mot con so: ");
	scanf("%d", &number);
	if(number % 3 == 0 && number % 5 == 0){
		printf("So ban nhap chia het cho ca 3 va 5 ");
	}else if(number % 3 == 0){
		printf("So ban nhap chi chia het cho 3 ");
	}else if(number % 5 == 0){
		printf("So ban nhap chi chia het cho 5 ");
	}else {
		printf("So ban nhap khong chia het cho ca 3 và 5") 
	} 
	return 0;
}
