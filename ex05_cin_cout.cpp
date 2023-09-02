#include <iostream>
#include <string>
using namespace std;

int main() 
{
	char ch;
	int i, j;
	float f;
	string mystr;      //char str[]  c-stype
	
	cout << "請輸入一個字母: ";
	cin >> ch;
	cout << "您輸入 " << ch << " 的字母" << endl << endl; 
// ------------------------------------------
	
	cout <<"請輸入二個整數: ";
	cin >> i >> j;
	cout << "您輸入的二個整數 i 是 " << i << "，j 是 " << j << endl << endl;
// ------------------------------------------
	
	cout << "請輸入一個浮點數: ";
	cin >> f;
	cout << "您輸入的浮點數 f 是 " << f << endl << endl;
// ------------------------------------------
	
	cout << "請輸入一個字串: ";
	cin >> mystr;
	cout << "您輸入的字串是 " << mystr << endl;
	
	return 0;
}
