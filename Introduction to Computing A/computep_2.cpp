#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	//ע�����ݹ����������ڽ׳ˣ�ָ��֮�������²�Ҫֻʹ��int,
	//visual studio�У�long longռ8��byte
	long long iDen = 1;
	double dResult = 1.0;
	for (int i = 1; i <= n; i++){
		iDen *= i;
		dResult += (double)1 / iDen;
	}

	cout << fixed << setprecision(10) << dResult << endl;
	return 0;
}