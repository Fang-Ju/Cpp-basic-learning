#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int num;
	int &ref = num;   //�ŧi ref is reference variable of num 
	int LiBai;
	int &TaiBai = LiBai;  //�ŧi TaiBai is reference variable of LiBai

//	int *pLiBai;  //�ŧi�����ܼ� pLiBai
//	pLiBai = &LiBai; //�����ܼ� pLiBai �s�J &LiBai ���Ŷ��a�} 
	int *pLiBai = &LiBai;  // �ŧi �����ܼ� pLiBai �s�J LiBai ���Ŷ��a�} 
		
	cout << "�аݧ��դ��~�Q��: ";
	cin >> LiBai;
	
	cout << "���դ��~" << LiBai << "��!" << endl;
	cout << "�ӥդ��~" << TaiBai << "��!" << endl;
	cout << "��b &LiBai ��} ���H���~ " << *pLiBai << "��!" <<endl;
	
	cout << "���ժ��a�}" <<  &LiBai << endl; 
	cout << "�ӥժ��a�}" <<  &TaiBai << endl; 
	cout << "���ժ������ܼƤ�f�Wï�a�}" <<  pLiBai << endl; 
	
	cout << "\n\n";
	
	TaiBai = TaiBai + 1;  //SAME AS TaiBai++;
	
	cout << "���թ��~" << LiBai << "��!" << endl;
	cout << "�ӥթ��~" << TaiBai << "��!" << endl;
	cout << "��b &LiBai ��} ���H���~ " << *pLiBai << "��!" <<endl;
	
	return 0;
}
