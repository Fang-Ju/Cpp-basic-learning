#include <iostream>
using namespace std;

int volume(int, int=2, int=3);
//int volume(int l, int w=2, int h=3);

int main() 
{
	int ans;
	
	ans = volume(10, 20, 30);
	cout<<"volume(10, 20, 30) = "<<ans<<"\n";
	
	ans = volume(10, 20);
	cout<<"volume(10, 20, 3) = "<<ans<<"\n";
	
	ans = volume(10);
	cout<<"volume(10, 2, 3) = "<<ans<<"\n";

	return 0;
}

int volume(int l, int w, int h)
{
	return l*w*h;
}

