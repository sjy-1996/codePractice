#include <stdio.h>
int main(int argc, char const *argv[])
{
	int failA = 0,failB = 0;
	int N;
	scanf("%d",&N);
	while(N--)
	{
		int a1,a2,b1,b2;
		scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
		if(a1+b1 == a2 && a1+b1 != b2)
			failB++;
		else if(a1+b1 == b2 && a1+b1 != a2)
			failA++;
	}
	printf("%d %d\n",failA,failB);
	return 0;
}