#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "";
	string s1 = "�C�]�ǽ�";
	string s2 = "�n�i��";
	
	
	s = s1 + s2;
	cout << "s1+s2����" << s << "\n\n";
	//---------------------------------------
	
	cout << "s1+s2����" << s1+s2 << "\n\n";
	//---------------------------------------
	s1.append(s2, 0, 6);
	cout << "s1 append s2 ����" << s1 << "\n";
	
	//----------------------------------------
	s = "";
	s.append(s1, 0, 14);
	cout << "s append s1 ����" << s << "\n";
	
	return 0;
} 
