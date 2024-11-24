#include<stdio.h>
int main (){
	int m;
	printf("Nhap so thang ban muon : ");
	scanf("%d", &m);
	switch(m){
		case 1 : case 3: case 5 : case 7 : case 8 : case 10 : case 12:
	printf("Thang ban nhap co 31 ngay");
	break;
	case 4 : case 6 : case 9 : case 11:
	printf("Thang ban nhap co 30 ngay\n");
	break;
	case 2:
	printf("Thang ban nhap co 29 hoac 28 ngay\n");
	break;
	default:
	printf("So thang nhap khong hop le\n");
	}
	return 0; 
} 
