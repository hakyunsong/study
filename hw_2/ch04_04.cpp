/*
2021271424 ������
����2_4
*/

#include<iostream>
#include<string>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};
int main() {
	int num;
	cout << "���� ���� �Է�>>";
	cin >> num;

	Circle* p = new Circle[num];
	if (!p)
		return 0;
	int radius;
	for (int i = 0; i < 4; i++) {

		cout << "��" << i + 1 << "�� ������>>";
		cin >> radius;
		p[i].setRadius(radius);

	}
	int count = 0;
	for (int i = 0; i <4; i++) {
		if (p[i].getArea() > 100)
			count++;
	}
	cout << "������ 100���� ū ����" << count << "�� �Դϴ�" << endl;



	delete[] p;

	return 0;
}