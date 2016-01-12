#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin >> n;

	int iWordNum;
	double iSum = 0.0;
	while (n--){
		cin >> iWordNum;
		//Attention: the result of int/int is still int, not float or double
		int iTextNum = ceil((double)iWordNum / 70);
		iSum += iTextNum * 0.1;
	}

	cout << fixed << setprecision(1) << iSum << endl;
	return 0;
}