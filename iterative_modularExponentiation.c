
#include <stdio.h>

int modularExponentiation1(int x,int n,int M)
{
     int result = 1;
    while(n>0)
    {
        if(n%2 == 1)
            result = (result*x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}
int main()
{
   int a,b,c;
   printf("iterative binery exponentiation:\n");
   printf("enter the number and power and modular:\n");
   scanf("%d%d%d",&a,&b,&c);
   printf("final value = %d",modularExponentiation1(a,b,c)); 
   return 0;
}

