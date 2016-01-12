#include<iostream>
using namespace std;

int main(){
	int k;
	int iNums[100];

	//cin
	cin >> k;
	for (int i = 0; i < k; i++){
		cin >> iNums[i];
	}

	int i1Times = 0;
	int i5Times = 0;
	int i10Times = 0;
	for (int i = 0; i < k; i++){
		if (iNums[i] == 1) i1Times++;
		if (iNums[i] == 5) i5Times++;
		if (iNums[i] == 10) i10Times++;
	}

	//cout
	cout << i1Times << endl;
	cout << i5Times << endl;
	cout << i10Times << endl;
	return 0;
}