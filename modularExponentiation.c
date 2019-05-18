
#include <stdio.h>

int modularExponentiation(int x,int n,int M)
{
   if(n == 0)
    return 1;
   else if(n%2 == 0)//n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else 
    return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;
}
int main()
{
   int a,b,c;
   printf("enter the number and power and modular:\n");
   scanf("%d%d%d",&a,&b,&c);
   printf("final value = %d",modularExponentiation(a,b,c)); 
   return 0;
}

