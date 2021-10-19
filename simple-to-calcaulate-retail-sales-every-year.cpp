#include <iostream>
#include<cstring>
#include<string>
using namespace std;
int i;
float num[30];
float a;
float b; 
int main() {
	for (int j = 0; j < 3; j++) {
		cout << "第" << j + 1 << "年" << endl;
		for (i = 0; i < 12; i++) {

			cout << "輸入" << i + 1 << "月份 銷售量" << endl;
			cin >> num[i];

		}
	}
	for (int j = 0; j < 3; j++) {
		for (i = 0; i < 12; i++) {
			a = a + num[i];

		}cout << "第" << j << "年銷量累計為" << a << endl;
		b = b + a;
	}cout << "3年總銷量" << b << "本" << endl;

	return 0;
}
