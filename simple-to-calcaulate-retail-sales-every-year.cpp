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
		cout << "��" << j + 1 << "�~" << endl;
		for (i = 0; i < 12; i++) {

			cout << "��J" << i + 1 << "��� �P��q" << endl;
			cin >> num[i];

		}
	}
	for (int j = 0; j < 3; j++) {
		for (i = 0; i < 12; i++) {
			a = a + num[i];

		}cout << "��" << j << "�~�P�q�֭p��" << a << endl;
		b = b + a;
	}cout << "3�~�`�P�q" << b << "��" << endl;

	return 0;
}
