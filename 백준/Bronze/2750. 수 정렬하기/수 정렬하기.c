#include<stdio.h>
int main(void)
{
    int counting[2001]={0,};
    int temp;
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&temp);
        counting[temp+1000]++;
    }
    for(int n=0;n<=2000;n++)
    {
        if(counting[n]!=0)
        {
            printf("%d\n",n-1000);
        }
    }
    return 0;
}