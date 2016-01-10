#include<iostream>
using namespace std;

int main(){
	int h;
	int r;
	const double PI = 3.14159;
	cin >> h >> r;

	int iNumBuckets = 0;
	double dTotalWater = 0.0;
	while (dTotalWater < 20000){
		double dBucket = PI * r * r * h;
		dTotalWater += dBucket;
		iNumBuckets++;
	}

	cout << iNumBuckets << endl;
	return 0;
}