#include<stdio.h>
int main()
{
	int n,a=0,b=1,c=0,sum=0; 
	printf("enter the n value");
	scanf("%d",&n);
	while(c <= n)
	{
	printf("%d ", sum);
	a = b;
	b = sum;
	sum=a+b;
	c++;
	}
	return 0;
}

