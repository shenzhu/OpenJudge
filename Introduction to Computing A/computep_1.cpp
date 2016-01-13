#include<iostream>
using namespace std;

int main(){
	int n;
	int iCases[20][2];

	//cin
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> iCases[i][0] >> iCases[i][1];
	}

	//calculate
	double dBaseEfficiency = (double)iCases[0][1] / iCases[0][0];
	for (int i = 1; i < n; i++){
		double dTempEfficiency = (double)iCases[i][1] / iCases[i][0];
		if ((dTempEfficiency - dBaseEfficiency) > 0.05){
			cout << "better" << endl;
		}
		else if ((dTempEfficiency - dBaseEfficiency) < -0.05){
			cout << "worse" << endl;
		}
		else{
			cout << "same" << endl;
		}
	}
	return 0;
}