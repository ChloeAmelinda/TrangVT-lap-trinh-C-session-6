#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;i<=100;i++)
	{
		printf("%d\n",i);
		
		// chia het cho 3 va 5
		if(i%3==0 && i%5==0)
		{
			printf("%d fizzbuzz \n", i);
			
		}
		else 
		{
			if(i%3==0)
			{
				printf("%d fizz \n",i);
			}
			else
			{
				if(i %5==0)
				{
					printf("%d buzz \n",i);
				}
			}
			
		}
	}
	
	return 0;
}
