#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n;
	int iStudentAges[100];

	//cin
	cin >> n;
	int iAgeSum = 0;
	for (int i = 0; i < n; i++){
		cin >> iStudentAges[i];
		iAgeSum += iStudentAges[i];
	}

	double iAverageAge = (double)iAgeSum / n;
	cout << fixed << setprecision(2) << iAverageAge << endl;
	return 0;
}