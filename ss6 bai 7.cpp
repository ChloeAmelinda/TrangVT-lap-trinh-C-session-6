#include<stdio.h>
int main()
{
	int n, uoc;
	printf("nhap so nguyen :");
	scanf("%d",&n);
	
	for(int i=1; i<=n;i++)
	{
		if(n%i ==0)
		{
		 uoc +=n /i;
		 printf("uoc cua %d la %d \n",n,i);
		}
	
		
	}
	
	return 0;
}
