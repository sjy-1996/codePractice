#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,m;
	int a[110];
	int count = 0;
	scanf("%d%d",&n,&m);
	m %= n;

	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	for (int i = 0; i < m ; ++i)
	{	
		++count;
		printf("%d",a[i+n-m] );
		if(count != n) 
			printf(" ");
	}

	for (int i = 0; i < n-m ; ++i)
	{
		++count;
		printf("%d",a[i] );
		if(count != n) 
			printf(" ");
		else printf("\n");
	}
	return 0;
}