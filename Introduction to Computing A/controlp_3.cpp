#include<iostream>
using namespace std;

int main(){
	int i1stNum;
	int i2ndNum;
	int iResult;
	char chOperator;

	cin >> i1stNum >> chOperator >> i2ndNum;
	switch (chOperator)
	{
	case '+':
		iResult = i1stNum + i2ndNum;
		break;
	case '-':
		iResult = i1stNum - i2ndNum;
		break;
	case '*':
		iResult = i1stNum * i2ndNum;
		break;
	case '/':
		iResult = i1stNum / i2ndNum;
		break;
	case '%':
		iResult = i1stNum % i2ndNum;
		break;
	default:
		break;
	}
	cout << iResult << endl;
	return 0;
}