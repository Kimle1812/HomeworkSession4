#include<stdio.h>
int main(){
	int a, b, c;
	printf("Moi ban nhap canh tam giac dau tien: ");
	scanf("%d", &a);
	
	printf("Moi ban nhap canh tam giac thu hai: ");
	scanf("%d", &b);
	
	printf("Moi ban nhap canh tam giac thu ba: ");
	scanf("%d", &c);
	
	if(a + b > c && a + c > b && b + c > a){
		printf("Ba canh ban nhap tao thanh duoc tam giac"); 
	} else {
		printf("Ba canh ban nhap khong tao thanh tam giac"); 
	}
	return 0; 
} 
