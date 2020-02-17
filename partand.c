#include <stdio.h>
int main(int argc, char const *argv[])
{
	int sum1 = 0,sum2 = 0;
	long long a,da,b,db;
	scanf("%lld%lld%lld%lld",&a,&da,&b,&db);
	for( ; a ; a /= 10)
	{
		int t = a%10;
		if(t == da)
			sum1 = sum1 * 10 + da;
	}
	for( ; b ; b /= 10)
	{
		int t = b%10;
		if(t == db)
			sum2 = sum2 * 10 + db;
	}
	printf("%d\n",sum1+sum2 );
	return 0;
}