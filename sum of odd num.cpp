#include<stdio.h>
int main()
{
	int a=1,sum=0,n;
	printf("enter the n value");
	scanf("%d",&n);
	while (a<n)
	{
		sum=sum+a;
		printf("%d\t",a);
		a=a+2;
		}
	printf("\nsum of %d odd numbers:%d",n,sum);
}
