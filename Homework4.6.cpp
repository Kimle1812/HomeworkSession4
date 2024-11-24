#include<stdio.h>
int main(){
	int cs_cu;
	int cs_moi;
	printf("Moi ban nhap chi so cu ");
	scanf("%d", &cs_cu);
	printf("Moi ban nhap chi so moi ");
	scanf("%d", &cs_moi);
	int so_dien = cs_moi - cs_cu;
	if (so_dien >= 0 and so_dien < 50) {
		int gia_dien = so_dien * 10000;
		printf("Tien dien thang nay la %d\n", gia_dien);
	} else if (so_dien >= 50 and so_dien < 100) {
		int gia_dien = so_dien * 15000;
		printf("Tien dien thang nay la %d\n", gia_dien);
	} else if (so_dien >= 100 and so_dien < 150) {
		int gia_dien = so_dien * 20000;
		printf("Tien dien thang nay la %d\n", gia_dien);
	} else if (so_dien >= 150 and so_dien < 200) {
		int gia_dien = so_dien * 25000;
		printf("Tien dien thang nay la %d\n", gia_dien);
	} else {
		int gia_dien = so_dien * 30000;
		printf("Tien dien thang nay la %d\n", gia_dien);
	}
	return 0;
}
