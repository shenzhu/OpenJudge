#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//declare
int compareToZero(double x);

int main(){
	int n;
	double dAs[10000][1];
	double dBs[10000][1];
	double dCs[10000][1];

	//cin
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> dAs[i][0] >> dBs[i][0] >> dCs[i][0];
	}

	//calculate
	for (int i = 0; i < n; i++){
		double a = dAs[i][0];
		double b = dBs[i][0];
		double c = dCs[i][0];

		double dDelta = b * b - 4 * a * c;
		if (compareToZero(dDelta) == 1){
			double x1 = (-b + sqrt(dDelta)) / (2 * a);
			double x2 = (-b - sqrt(dDelta)) / (2 * a);
			if (compareToZero(x1) == 0) x1 = 0;
			if (compareToZero(x2) == 0) x2 = 0;
			cout << "x1=" << fixed << setprecision(5) << x1 << ";" << "x2=" << x2 << endl;
		}
		if (compareToZero(dDelta) == 0){
			double x1 = (-b + sqrt(dDelta)) / (2 * a);
			if (compareToZero(x1) == 0) x1 = 0;
			cout << "x1=x2=" << fixed << setprecision(5) << x1 << endl;
		}
		if (compareToZero(dDelta) == -1){
			double dImaginary = sqrt(-dDelta) / (2 * a);
			double dReal = -b / (2 * a);
			if (compareToZero(dReal) == 0) dReal = 0;
			if (compareToZero(dImaginary) == 0) dImaginary = 0;
			cout << "x1=" << fixed << setprecision(5) << dReal << "+" << dImaginary << "i" << ";" << "x2=" << dReal << "-" << dImaginary << "i" << endl;
		}
	}
	return 0;
}

int compareToZero(double x){
	/*if(x>0)  return 1;
	else if(x<0)  return -1;
	else  return 0;*/
	//这种写法会出现浮点数计算精度的误差，需要用下面的方法来比较浮点数x与0之间的大小关系
	if ((x - 0) > 1e-5) return 1;
	else if ((x - 0) < -(1e-5)) return -1;
	else return 0;
}