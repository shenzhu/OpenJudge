#include<iostream>
using namespace std;

int main(){
	int h;
	cin >> h;

	double dDistanceSum = (double)h;
	double dithHeight = (double)h;
	double d10thHeight = 0.0;
	for (int i = 0; i < 9; i++){
		dithHeight = (double)dithHeight / 2;
		dDistanceSum += 2 * dithHeight;
		//10th height
		if (i == 8){
			d10thHeight = dithHeight / 2;
		}
	}
	cout << dDistanceSum << endl;
	cout << d10thHeight << endl;
	return 0;
}