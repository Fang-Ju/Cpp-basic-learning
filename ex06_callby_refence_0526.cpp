#include <stdio.h>
void swap(int&, int&);  //swap 交換 
// int sum(int a, int b);

int main() 
{
	int a, b;
	
	printf("請輸入兩個整數值 : ");
	scanf("%d %d", &a, &b);
	printf("MAIN: address a is %d, address b is %d\n", &a, &b);
	
	printf("MAIN: Before swap() a is %d, b is %d\n", a, b);
	swap(a, b);   // call by value
	printf("MAIN: After swap() a is %d, b is %d\n", a, b);
	
	return 0;
}

void swap(int &a, int &b)   //int &ra = a;
{
	int temp;
		
	printf("SUB Before swap() a is %d, b is %d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	
	printf("SUB After swap() a is %d, b is %d\n", a, b);
	
}

/*
void swap(int &ra, int &rb)   //int &ra = a;
{
	int temp;
		
	printf("SUB Before swap() a is %d, b is %d\n", ra, rb);
	temp = ra;
	ra = rb;
	rb = temp;
	
	printf("SUB After swap() a is %d, b is %d\n", ra, rb);
	
}
*/
