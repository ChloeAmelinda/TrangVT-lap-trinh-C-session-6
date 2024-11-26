#include<stdio.h>
int main()
{
	int a,b,c,x;
	float delta;
	printf("nhap so a : \n");
	scanf("%d",&a);
	
	printf("nhap so b : \n");
	scanf("%d",&b);
	
	printf("nhap so c : \n");
	scanf("%d",&c);
	
	printf("%dx^2+ %dx + %d = 0 \n", a ,b,c);
	
	if(a==0)
	{
		
		if(b==0)
		{
			if(c=0)
			{
				printf("vo so nghiem \n");
			}
			else
			{
				printf("vo ngiem \n");
			}
		}
		else
		{
			printf("x= -%d/%d",c,b);
		}
		
	}
	else if(a!=0)
	{
		delta=b*b-4*a*c;
		if(delta>=0)
		{
			printf("phuong trinh co 2 nghiem \n");
		 } 
		 else
		 {
		 	printf("phuong trinh vo nghiem \n");
		 }
	}
		return 0;
	
}
