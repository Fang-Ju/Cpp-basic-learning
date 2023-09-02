#include <iostream>
using namespace std;

int main() 
{
	int i = 101;
	bool type = true;
	
	for(int i=0; i<10; i++)
	{
		type = !type;
		
		cout <<"type is "<< type <<", i is "<< i <<endl;
	}
	
	cout <<"Outside i is "<< i <<endl;  //endl is "\n
	
	
	return 0;
}
