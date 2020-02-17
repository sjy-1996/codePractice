#include <stdio.h>
#include <algorithm>

using namespace  std;

int main(int argc, char const *argv[])
{
	int a[6] = {9,4,2,5,6,-1};
	sort(a,a+4);
	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", a[i]);
	}
	
	printf("\n");

	for (int i = 0; i < 6; ++i)
	{
		printf("%d ",a[i] );
	}


	return 0;
}