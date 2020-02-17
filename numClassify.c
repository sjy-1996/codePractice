#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[110];
	int n;
	scanf("%d",&n);

	int a1,a2,a3,a4,a5;
	a1 = a2 = a3 = a4 = a5 = 0;

	int flag1 = 0,
		flag2 = 0,
		flag3 = 0,
		flag4 = 0,
		flag5 = 0;

	int a2_count = 0,a4_count = 0;
	//输入数据
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	//
	

	for (int i = 0; i < n; ++i)
	{
		if(a[i] % 5 == 0 && a[i] % 2 == 0)
			{
				flag1 = 1;		
				a1 += a[i];
			}	
		if(a[i] % 5 == 1)
			{
				flag2 = 1;
				if(++a2_count % 2 == 0)
					a2 -= a[i];
				else a2 += a[i];

			}
		if(a[i] % 5 == 2)
			{
				flag3 = 1;
				a3++;
			}
		if(a[i] % 5 == 3)
		{	
			flag4 = 1;
			a4_count++;
			a4 += a[i];
		}
		if(a[i] % 5 == 4)
		{
			if(flag5 == 0)
			{
				a5 = a[i];
				flag5 = 1;
			}
			if(a[i] >= a5)
				a5 = a[i];
		}
	}

	if(flag1) printf("%d ",a1 );
	else	printf("N ");

	if(flag2) printf("%d ",a2 );
	else	printf("N ");

	if(flag3) printf("%d ",a3 );
	else	printf("N ");

	if(flag4) printf("%.1f ",(float)a4/(float)a4_count );
	else	printf("N ");

	if(flag5) printf("%d\n",a5 );
	else	printf("N\n");

	return 0;
}