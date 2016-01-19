#include<iostream>
using namespace std;

int main(){
	int n;
	int i100Num;
	int i50Num;
	int i20Num;
	int i10Num;
	int i5Num;
	int i1Num;
	cin >> n;

	//100
	i100Num = n / 100;
	n %= 100;
	//50
	i50Num = n / 50;
	n %= 50;
	//20
	i20Num = n / 20;
	n %= 20;
	//10
	i10Num = n / 10;
	n %= 10;
	//5
	i5Num = n / 5;
	n %= 5;
	//1
	i1Num = n / 1;

	//cout
	cout << i100Num << endl;
	cout << i50Num << endl;
	cout << i20Num << endl;
	cout << i10Num << endl;
	cout << i5Num << endl;
	cout << i1Num << endl;
	return 0;
}