#include<iostream>
using namespace std;

//declare
int gcd(int x, int y);

int main(){
	int n;
	int iFractionNum[20];
	int iFractionDen[20];
	char chEatSlash;

	//cin
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> iFractionNum[i] >> chEatSlash >> iFractionDen[i];
	}

	//add
	int iNum = iFractionNum[0];
	int iDen = iFractionDen[0];
	for (int i = 1; i < n; i++){
		iNum = iNum * iFractionDen[i] + iDen * iFractionNum[i];
		iDen = iDen * iFractionDen[i];
		//find gcd
		int iGCD = gcd(iNum, iDen);
		iNum /= iGCD;
		iDen /= iGCD;
	}

	if (iDen == 1){
		cout << iNum << endl;
	}
	else{
		cout << iNum << "/" << iDen << endl;
	}
	return 0;
}

int gcd(int x, int y){
	while (x != y){
		if (x > y) x = x - y;
		else y = y - x;
	}
	return x;
}