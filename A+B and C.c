#include<stdio.h>
int main()
{
    int T;
    int count = 0;
    scanf("%d",&T);
    while(T--)
    {
        long long A,B,C;
        scanf("%lld%lld%lld",&A,&B,&C);
        if(A+B>C)
            printf("Case #%d:true\n",++count);
        else 
            printf("Case #%d:false\n",++count);
    }
    return 0;
}