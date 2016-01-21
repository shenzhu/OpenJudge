#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin >> n;

	int iHundredBit;
	int iTenBit;
	int iOneBit;

	for (int i = 100; i <= 999; i++){
		if (n == 0) break;

		bool bFound = false;
		bool bFirstCondition = false;
		bool bSecondCondition = false;

		iHundredBit = i / 100;
		iTenBit = (i % 100) / 10;
		iOneBit = i % 10;

		int iSqrt = (int)sqrt(i);
		int iTemp = iSqrt * iSqrt;
		if (iTemp == i){
			bFirstCondition = true;
		}

		if ((iHundredBit == iTenBit) || (iHundredBit == iOneBit) ||
			(iTenBit == iOneBit)){
			bSecondCondition = true;
		}

		if (bFirstCondition && bSecondCondition){
			n--;
			if (n == 0){
				cout << i << endl;
			}
		}
	}
	return 0;
}