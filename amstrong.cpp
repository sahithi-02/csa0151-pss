#include <stdio.h>
int main() 
{
    int num,d, m, sum= 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    d = num;

    while (d != 0) {
    	
       m= d % 10;
        
       sum+= m * m * m;
        
       d/= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
