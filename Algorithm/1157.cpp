#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int a[26];
	fill_n(a, 26, 0);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] < 97) {				//���ĺ��� �빮���̸�
			s[i] += 32;					//�ҹ��ڷ� ��ȯ
		}		
		a[s[i] - 97]++;					//���ĺ��� �ƽ�Ű�ڵ� - 97�� �ε����� ����.
	}

	int biggest = a[0];
	int index = 0;
	bool duplicate = 0;
	for (int i = 1; i < 26; i++) {
		if (biggest < a[i]) {
			biggest = a[i];
			index = i;
			duplicate = 0;
		}
		else if (biggest == a[i] && biggest > 0) {
			duplicate = 1;
		}
	}
	if (duplicate) {				//���ϰ��� ������ ��
		cout << "?" << endl;
		exit(0);
	}
	cout << (char)(index + 65) << endl;

	return 0;
}