#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	//注意数据过大的情况，在阶乘，指数之类的情况下不要只使用int,
	//visual studio中，long long占8个byte
	long long iDen = 1;
	double dResult = 1.0;
	for (int i = 1; i <= n; i++){
		iDen *= i;
		dResult += (double)1 / iDen;
	}

	cout << fixed << setprecision(10) << dResult << endl;
	return 0;
}