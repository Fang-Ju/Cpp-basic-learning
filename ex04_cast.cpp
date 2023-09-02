#include <iostream>
using namespace std;

int main() 
{
	int i;
	float f = 3.1415;
	
	cout <<"i = "<< i << "\n";
	cout <<"f = "<< f << endl;
	
	cout << "\n\n";
	
	i = f;   // Áô§tªºÂà«¬ impiled cast 
	cout <<"i = "<< i << "\n";
	cout <<"f = "<< f << endl;
	
	cout << "\n\n";
	
	i = (int) f;  // Force cast: C-STYPE
	cout <<"i = "<< i << "\n";
	cout <<"f = "<< f << endl;
	
	cout << "\n\n";
	
	i = int (f);  // Force cast: C++-STYPE
	cout <<"i = "<< i << "\n";
	cout <<"f = "<< f << endl;
	
	return 0;
}
