#include <cstdio>

void move(char , char );
void hanoi(int ,char , char , char );

int main(int argc, char const *argv[])
{
	hanoi(3,'A','B','C');
	return 0;
}

void hanoi(int n ,
		   char startTower , 
		   char middleTower , 
		   char destinationTower)
{
	if(n == 1)
		move(startTower , destinationTower);
	else
	{
		hanoi(n-1 , startTower , destinationTower , middleTower);
		move(startTower , destinationTower);
		hanoi(n-1 , middleTower , startTower , destinationTower);
	}
}

void move(char a, char b)
{
	printf("%c->%c\n",a,b);
}