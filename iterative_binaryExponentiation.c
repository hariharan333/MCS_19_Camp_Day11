
#include <stdio.h>

int binaryExponentiation1(int x,int n)
{
    int result = 1;
    while(n>0)
    {
        if(n%2 == 1)
            result = result*x;
        x = x*x;
        n = n/2;
    }
    return result;
}
int main()
{
   int a,b;
   printf("enter the number and power:\n");
   scanf("%d%d",&a,&b);
   printf("%d",binaryExponentiation1(a,b)); 
   return 0;
}

