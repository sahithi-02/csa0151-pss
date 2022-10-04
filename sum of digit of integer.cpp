#include <stdio.h>
int main()
{
   int num, d, sum = 0;

   printf("Enter an integer\n");
   scanf("%d", &num);
   while (num!= 0)
   {
      d = num % 10;
      sum       = sum + d;
      num       = num / 10;
   }

   printf("Sum of digits of %d = %d\n", num, sum);

   return 0;
}
