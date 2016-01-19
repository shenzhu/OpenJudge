#include<iostream>
using namespace std;

int main(){
	int n;
	int k;
	int iNumbers[1000];

	//cin
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> iNumbers[i];
	}

	bool bFound = false;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (iNumbers[i] + iNumbers[j] == k){
				bFound = true;
				break;
			}
		}
		if (bFound) break;
	}

	if (bFound) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}