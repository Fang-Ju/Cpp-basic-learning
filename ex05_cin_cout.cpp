#include <iostream>
#include <string>
using namespace std;

int main() 
{
	char ch;
	int i, j;
	float f;
	string mystr;      //char str[]  c-stype
	
	cout << "�п�J�@�Ӧr��: ";
	cin >> ch;
	cout << "�z��J " << ch << " ���r��" << endl << endl; 
// ------------------------------------------
	
	cout <<"�п�J�G�Ӿ��: ";
	cin >> i >> j;
	cout << "�z��J���G�Ӿ�� i �O " << i << "�Aj �O " << j << endl << endl;
// ------------------------------------------
	
	cout << "�п�J�@�ӯB�I��: ";
	cin >> f;
	cout << "�z��J���B�I�� f �O " << f << endl << endl;
// ------------------------------------------
	
	cout << "�п�J�@�Ӧr��: ";
	cin >> mystr;
	cout << "�z��J���r��O " << mystr << endl;
	
	return 0;
}
