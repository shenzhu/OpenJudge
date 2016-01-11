#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int iResult = 0;
	//check if 7-related
	for (int i = 1; i <= n; i++){
		int iBit = i % 10;
		int iTen = (i / 10) % 10;
		if ((i % 7 != 0) && (iBit != 7) && (iTen != 7)){
			iResult += i * i;
		}
	}

	cout << iResult << endl;
	return 0;
}