/*
2021271424 ������
����2_1
*/

#include<iostream>

using namespace std;

class Sample {
	int* p;
	int size;

public:
	Sample(int n) {
		this->size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};
Sample ::~Sample() {
	delete[] p;
}
void Sample::read() {
	cout << this->size << "���� ���� �Է��ϼ���," << endl;

	for (int i = 0; i < this->size; i++) {
		cout << i + `1 << "��° �� �Է�: ";
		int input;
		cin >> input;
		this->p[i] = input;
	}
}
void Sample::write() {
	cout << "�Էµ� ����" << '\n';
	for (int i = 0; i < this->size; i++) {
		cout << this->p[i] << ' ';
	}
	cout << endl;
}

int Sample::big() {
	int bigNum = this->p[0];
	for (int index = 1; index < this->size; index++) {
		if (bigNum < this->p[index])
			bigNum = this->p[index];
	}
	return bigNum;
}

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}

