#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double dBookPrices[] = { 28.9, 32.7, 45.6, 78.0, 35.0, 86.2, 27.8, 43, 56, 65 };
	int n;
	cin >> n;

	while (n--){
		int iBookNum[10];
		double dSum = 0.0;
		for (int i = 0; i < 10; i++){
			cin >> iBookNum[i];
		}
		
		//calculate
		for (int i = 0; i < 10; i++){
			dSum += dBookPrices[i] * iBookNum[i];
		}
		
		cout << fixed << setprecision(2) << dSum << endl;
	}
	return 0;
}