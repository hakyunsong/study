/*
2021271424 ������
����2_2
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	cout << "�Ʒ��� ������ �Է��Ͻÿ�.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, str, '\n');
		if(str == "exit")
			break;

		string reversword = str;
		int length = reversword.size();
		char temp;
		for (int i = 0; i < length / 2; i++) {
			temp = reversword[i];
			reversword[i] = reversword[length - i - 1];
			reversword[length - 1 - i] = temp;
		}
		cout << reversword << endl;


	}
	return 0;
}