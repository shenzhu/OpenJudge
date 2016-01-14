#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double a;
	double b;
	double c;
	double sum = 0.0;

	int n, i;
	cin >> n;
	a = 2;
	b = 1;
	for (int i = 0; i < n; i++){
		sum = sum + a / b;
		c = a + b;
		b = a;
		a = c;
	}
	cout << fixed << setprecision(4) << sum << endl;
	return 0;
}