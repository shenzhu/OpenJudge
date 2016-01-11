#include<iostream>
using namespace std;

int main(){
	int n;
	int a;	//num of legs
	cin >> n;

	while (n--){
		cin >> a;
		
		if (a % 2 != 0){
			cout << "0 0" << endl;
		}
		else if (a % 4 != 0){
			int iMaxNum = a / 2;
			int iMinNum = a / 4 + 1;
			cout << iMinNum << " " << iMaxNum << endl;
		}
		else{
			int iMaxNum = a / 2;
			int iMinNum = a / 4;
			cout << iMinNum << " " << iMaxNum << endl;
		}
	}

	return 0;
}