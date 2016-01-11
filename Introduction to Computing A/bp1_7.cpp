#include<iostream>
using namespace std;

int main(){
	int m;
	int n;
	cin >> m >> n;

	int iResult = 0;
	for (int i = m; i <= n; i++){
		if (i % 2 != 0){
			iResult += i;
		}
	}

	cout << iResult << endl;
	return 0;
}