
#include <stdio.h>

int modInverse(int A,int M)
{
  A = A%M;
  for(int B=1;B<M;B++)
  if(((A*B)%M) == 1)
        return  B;
}

int main()
{
   int a,b;
   printf("enter the number and modular value:\n");
   scanf("%d%d",&a,&b);
   printf("final value = %d",modInverse(a,b)); 
   return 0;
}

