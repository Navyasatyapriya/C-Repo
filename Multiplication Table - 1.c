#include<stdio.h>
#include<math.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d\n",N,i,N*i);
    }
}