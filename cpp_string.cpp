#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "";
	string s1 = "七夜怪談";
	string s2 = "好可怕";
	
	
	s = s1 + s2;
	cout << "s1+s2之後" << s << "\n\n";
	//---------------------------------------
	
	cout << "s1+s2之後" << s1+s2 << "\n\n";
	//---------------------------------------
	s1.append(s2, 0, 6);
	cout << "s1 append s2 之後" << s1 << "\n";
	
	//----------------------------------------
	s = "";
	s.append(s1, 0, 14);
	cout << "s append s1 之後" << s << "\n";
	
	return 0;
} 
