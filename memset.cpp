#include <cstdio>
#include <cstring>
int main(int argc, char const *argv[])
{
	int a[5]={0}; //= {2,3,4,5,6};
	//memset(a,1,5*sizeof(int));
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}