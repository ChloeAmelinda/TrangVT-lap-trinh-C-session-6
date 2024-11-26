#include<stdio.h>
int main()
{
	int thang, tienbandau;
	float lai, tienlai , tiennhan;
	printf("Nhap so tien ban dau :");
	scanf("%d",&tienbandau);
	
	printf("Nhap so lai :");
	scanf("%f", &lai);
	
	printf("Nhap so thang: ");
	scanf("%d", &thang);
	
	tienlai = tienbandau * (lai/12 ) * thang;
	printf("Tien lai la : %f\n", tienlai);
	
	tiennhan = tienbandau + tienlai;
	printf("Tien nhan la : %f", tiennhan);
	
	return 0;
}
