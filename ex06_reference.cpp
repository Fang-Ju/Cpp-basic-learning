#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int num;
	int &ref = num;   //宣告 ref is reference variable of num 
	int LiBai;
	int &TaiBai = LiBai;  //宣告 TaiBai is reference variable of LiBai

//	int *pLiBai;  //宣告指標變數 pLiBai
//	pLiBai = &LiBai; //指標變數 pLiBai 存入 &LiBai 的空間地址 
	int *pLiBai = &LiBai;  // 宣告 指標變數 pLiBai 存入 LiBai 的空間地址 
		
	cout << "請問李白今年貴庚: ";
	cin >> LiBai;
	
	cout << "李白今年" << LiBai << "歲!" << endl;
	cout << "太白今年" << TaiBai << "歲!" << endl;
	cout << "住在 &LiBai 位址 的人今年 " << *pLiBai << "歲!" <<endl;
	
	cout << "李白的地址" <<  &LiBai << endl; 
	cout << "太白的地址" <<  &TaiBai << endl; 
	cout << "李白的指標變數戶口名簿地址" <<  pLiBai << endl; 
	
	cout << "\n\n";
	
	TaiBai = TaiBai + 1;  //SAME AS TaiBai++;
	
	cout << "李白明年" << LiBai << "歲!" << endl;
	cout << "太白明年" << TaiBai << "歲!" << endl;
	cout << "住在 &LiBai 位址 的人明年 " << *pLiBai << "歲!" <<endl;
	
	return 0;
}
