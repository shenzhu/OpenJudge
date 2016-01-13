#include<iostream>
using namespace std;

int main(){
	int n;
	int k;
	double dIDAndGrades[100][2];

	//cin
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> dIDAndGrades[i][0] >> dIDAndGrades[i][1];
	}

	//selection sort
	for (int i = 0; i < n - 1; i++){
		/*find the max element in the unsorted array [i ... n - 1]
		  assume the max is the first element*/
		int iMaxGradeIndex = i;
		//test element after i to find the biggest
		for (int j = i + 1; j < n; j++){
			if (dIDAndGrades[j][1] > dIDAndGrades[iMaxGradeIndex][1]){
				iMaxGradeIndex = j;
			}
		}

		if (iMaxGradeIndex != i){
			double dIdTemp;
			double dGradeTemp;
			//change id
			dIdTemp = dIDAndGrades[i][0];
			dIDAndGrades[i][0] = dIDAndGrades[iMaxGradeIndex][0];
			dIDAndGrades[iMaxGradeIndex][0] = dIdTemp;
			//change grade
			dGradeTemp = dIDAndGrades[i][1];
			dIDAndGrades[i][1] = dIDAndGrades[iMaxGradeIndex][1];
			dIDAndGrades[iMaxGradeIndex][1] = dGradeTemp;
		}
	}

	//cout
	cout << (int)dIDAndGrades[k - 1][0] << " " << dIDAndGrades[k - 1][1] << endl;
	return 0;
}