#include<iostream>
using namespace std;

int main(){
	int n;
	int iMedals[17][3];

	//cin
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> iMedals[i][0] >> iMedals[i][1] >> iMedals[i][2];
	}

	int iGoldenNum = 0;
	int iSivlerNum = 0;
	int iBrowzeNum = 0;
	int iMedalSum = 0;
	for (int i = 0; i < n; i++){
		iGoldenNum += iMedals[i][0];
		iSivlerNum += iMedals[i][1];
		iBrowzeNum += iMedals[i][2];
	}
	iMedalSum = iMedalSum + iGoldenNum + iSivlerNum + iBrowzeNum;

	cout << iGoldenNum << " " << iSivlerNum << " " << iBrowzeNum << " " << iMedalSum << endl;
	return 0;
}