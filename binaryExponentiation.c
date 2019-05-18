#include <stdio.h>
int k,l;
int binaryExponentiation(int,int);
int main()
{
   int x,n;
   printf("enter the number and power:\n");
   scanf("%d%d",&x,&n);
   printf("%d",binaryExponentiation(x,n));
    return 0;
}
int binaryExponentiation(int x,int n)
{
    if(n == 0)
        return 1;
    else if(n%2 == 0)
        {
        l = binaryExponentiation(x*x,n/2);
        printf("%d\n",l);
        return l;
        }
    else
      {  k = x*binaryExponentiation(x*x,(n-1)/2);
         printf("%d\n",k);
        return k;
      }
}

