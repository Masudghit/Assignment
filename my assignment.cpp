#include <stdio.h>
#include <stdlib.h>
int checkPrime(int number)
{
    int count = 0;
    for(int i=2; i<=number/2; i++)
    {
        if(number%i == 0)
        {
           count=1;
           break;
        }
    }
    if(number == 1) count = 1;

    return count;
}
int main()
{
    int m, n, j=0;
    float sum,avg;
    printf ("The starting value is: ");
    scanf("%d", &m);
    printf("The value that ends is: ");
    scanf("%d", &n);

    printf("prime numbers from %d to %d are: ", m,n);
    for(int i=m; i<=n; i++)
    {
        if (checkPrime(i) == 0)
        {
         printf("%d\t",i);
         sum=sum+i;
         j=++j;
        }
    }
   avg=sum/j;
   printf("\n Average of prime numbers %.2f", avg);

   return 0;

}
