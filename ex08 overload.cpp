#include <stdio.h>
double square(double);

int getMax(int, int);
int getMax(int, int, int);

int main() 
{
	int ans;
	double d;
	
	ans = square(10);
	printf("square(10) is %d\n", ans);
	d = square(3.24);
	printf("square(3.24) is %f\n", d);
	
	ans = getMax(20, 50);
	printf("getMax(20, 50) is %d\n", ans);
	ans = getMax(10, 50, 8);
	printf("getMax(10, 50, 8) is %d\n", ans);

	return 0;
}

int square(int n)
{
	return n*n;
}

double square(double d)
{
	return d*d;
}

int getMax(int a, int b)
{
	if (a>b)
		return a;
	else
		return b;
}

int getMax(int a, int b, int c)
{
	if (a>b)
	{
		if(a>c)
			return a;
		else
			return c;
	}
	else
	{
		if(b>c)
			return b;
		else
			return c;
	}
}
