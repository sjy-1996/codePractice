#include <stdio.h>
int main(int argc, char const *argv[])
{
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	int diff = c2 - c1;
	if( diff % 100 >= 50)
		diff = diff/100 + 1;
	else diff /= 100;
	int ss = diff % 60;
	diff /= 60;
	int mm = diff % 60;
	diff /= 60;
	int hh = diff % 60;
	printf("%d:%d:%d\n",hh,mm,ss ); 
	return 0;
}