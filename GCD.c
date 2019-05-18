
#include <stdio.h>

int GCD(int A,int B)
{
   if(B == 0)
    return A;
    else
    return GCD(B,A%B);
}

int main()
{
   int a,b,c;
   printf("enter the two number:\n");
   scanf("%d%d",&a,&b);
   printf("final value = %d",GCD(a,b)); 
   return 0;
}

