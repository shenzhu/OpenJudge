#include<iostream>
using namespace std;

int main(){
	int n;
	int iGoodBacNum;
	int iBadBacNum;

	//cin
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> iBadBacNum >> iGoodBacNum;

		int iHours = 0;
		while (iBadBacNum > 0){
			//good kill bad
			iBadBacNum -= iGoodBacNum;
			//bad increase
			if (2 * iBadBacNum >= 1000000){
				iBadBacNum = 1000000;
			}
			else{
				iBadBacNum *= 2;
			}
			//good increase
			iGoodBacNum *= 1.05;
			iHours++;
		}
		cout << iHours << endl;
	}
	return 0;
}