#include<iostream>
using namespace std;

int main(){
	int m;
	int n;
	int iNumers[500];
	int i2ndAppearNum;
	//ʹ��int��Ϊflag����Ϊ������flag
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
		//ʹ�����ַ�������ʵ��������Ԫ�ص������Ƚϣ������k = 0, k == j continue�ķ�����
		//��ᵼ���ظ��Ƚ����⣬�������һ���л�Խ������Ӱ��
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