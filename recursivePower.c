#include <stdio.h>
int k;
int recursivePower(int,int);
int main()
{
   int x,n;
   printf("enter the number and power:\n");
   scanf("%d%d",&x,&n);
   printf("%d",recursivePower(x,n));
    return 0;
}
int recursivePower(int x,int n)
{
    if(n==0)
        return 1;
     k = x*recursivePower(x,n-1);
     printf("%d\n",k);
     return k;
}

