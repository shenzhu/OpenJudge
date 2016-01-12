#include<iostream>
using namespace std;

int main(){
	int n;
	int iNum[100];

	//cin
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> iNum[i];
	}

	//rearange 
	int iResults[100];
	for (int i = 0; i < n; i++){
		iResults[i] = iNum[n - 1 - i];
	}

	//cout
	for (int i = 0; i < n; i++){
		cout << iResults[i] << " ";
	}
	return 0;
}