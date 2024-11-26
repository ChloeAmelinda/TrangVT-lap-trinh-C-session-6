#include<stdio.h>
int main()
{
	int n,tong;
	
	for(int i=1;i<=5;i++)
	{
		printf("nhap so thu %d :\n",i);
		scanf("%d",&n);
		
		if(n %2 == 0)
		{
			tong+=n;
		}
		
	}
	
	printf("tong  la : %d\n",&tong);
	return 0;
}
