#include <stdio.h>
int iterativePower(int,int);
int main()
{
   int x,n;
   printf("enter the number and power:\n");
   scanf("%d%d",&x,&n);
   printf("%d",iterativePower(x,n));
    return 0;
}
int iterativePower(int x,int n)
{
    int result=1;
    while(n>0)
    {
        result = result*x;
        n--;
    }
     return result;
}

