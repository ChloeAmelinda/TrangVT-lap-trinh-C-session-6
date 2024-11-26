#include<stdio.h>
int main()
{
	int month,year;
	printf("Nhap so thang : \n");
	scanf("%d",&month);
	
	printf("Nhap so nam : \n");
	scanf("%d",&year);
	
	switch(month)
	{
		case 1: case 3 :case 5: case 7: case 8: case 10 : case 12 :
		printf("Thang %d co 31 ngay \n", month);
		printf("Nam %d co 365 ngay \n", year);
		break;
		
		case 4: case 6:case 9: case 11:
		printf("Thang %d co 30 ngay \n", month);
		printf("Nam %d co 365 ngay \n", year);
		break;
		
		case 2:
			if(year % 400 ==0 || ( year % 4==0 && year % 100!=0))
			{
				printf("Thang %d co 29 ngay \n", month);
		        printf("Nam %d co 366 ngay \n", year);
		        break;
			}
			else
			{
				printf("Thang %d co 28 ngay \n", month);
		        printf("Nam %d co 365 ngay \n", year);
		        break;
			}
			
	}
	return 0;
}
