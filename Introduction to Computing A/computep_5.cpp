#include<iostream>
using namespace std;

int main(){
	int m;
	int n;
	int iNumers[500];
	int i2ndAppearNum;
	//使用int作为flag，作为次数的flag
	int iFlag;

	//cin
	cin >> m;
	for (int i = 0; i < m; i++){
		cin >> n;
		for (int j = 0; j < n; j++){
			cin >> iNumers[j];
		}

		//find 2nd appear
		iFlag = 0;
		//使用这种方法可以实现数组中元素的两两比较，如果用k = 0, k == j continue的方法，
		//则会导致重复比较问题，这个在这一题中会对结果产生影响
		for (int j = 0; j < n; j++){
			for (int k = j + 1; k < n; k++){
				if (iNumers[j] == iNumers[k]){
					iFlag++;
					break;
				}
			}

			if (iFlag == 2){
				cout << iNumers[j] << endl;
				break;
			}
		}
		
		if (iFlag != 2) cout << "NOT EXIST" << endl;
	}
	return 0;
}