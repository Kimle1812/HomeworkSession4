#include<stdio.h>
int main(){
	int day, month, year;
	printf("Moi ban nhap so ngay: ");
	scanf("%d", &day);
	printf("Moi ban nhap so thang: ");
	scanf("%d", &month);
	printf("Moi ban nhap so nam: ");
	scanf("%d", &year);
	switch(month){
		case 1 : case 5 : case 3 : case 7 : case 8 : case 10 : case 12 :
		if(0 < day <= 31 ){
			printf("Hop le"); 
		}else {
			printf("Khong hop le"); 
		} 
		break;
		case 4 : case 6 : case 9 : case 11 :
		if(0 < day <=  30){
			printf("Hop le"); 
		} else {
			printf("Khong hop le"); 
		} 
		break;
		case 2 :
		if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
			if(0 < day <= 28){
				printf("Hop le"); 
			} else {
				printf("Khong hop le"); 
			} 
		} else {
			if(0 < day <= 29){
				printf("Hop le"); 
			} else {
				printf("Khong hop le"); 
			} 
		}
		break;
		default:
		 printf("Khong hop le");
	} 
	return 0; 
} 
