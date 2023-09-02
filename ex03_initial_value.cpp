#include <iostream>
using namespace std;

int a(int);   //宣告一個副程式a ,裡面傳參數 
int main() 
{
	int a(10);  //SAME AS int a=10;
	int b = 20;
	float f = 3.14;
	
	cout <<"a = "<< a << "\n";   //endl is "\n"
	cout <<"b = "<< b << endl;   //endl is "\n"
	
	printf("%4.2f \n", f);
	cout << "f = " << f << endl;
	
	return 0;
}
