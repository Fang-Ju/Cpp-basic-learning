#include <iostream>
#include <windows.h>
#define TEMPO 800
using namespace std;

struct mydata
{
	char name[15];
	int score;
	
	void mySound(int n)
	{
		for(int i=0; i<n; i++)
		{
			cout<<"Sound "<< 400+50*i << endl;
			Beep(400+50*i, TEMPO);
		}
	}
};

mydata teacher = {"Apric", 90};

int main() 
{
	mydata student;    //struct mydata student;
	
	printf("%s got %d points! \n", teacher.name, teacher.score);
	
	printf("\n\n");
	printf("");
	printf("");
	
	teacher.mySound(3);
	
	student.mySound(8);
	
	return 0;
}
