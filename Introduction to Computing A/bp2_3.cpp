#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	float x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	//calculate
	double dA = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	double dB = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	double dC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	double dS = (dA + dB + dC) / 2;
	double A = sqrt(dS * (dS - dA) * (dS - dB) * (dS - dC));
	cout << fixed << setprecision(2) << A << endl;
	
	return 0;
}