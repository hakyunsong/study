// 2021271424 �̷������Ƽ�а� ������
// ����01_ch02_04.cpp
#include <iostream>
using namespace std;
#include <iostream>
#include <cstring>
using namespace std;
int espresso(int num);
int americano(int num);
int cappuccino(int num);
int main() {
    char coffee[100];
    int num, sum = 0;
    cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
    for (;;) {
        if (sum >= 20000) {
            cout << "���� " << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~\n";
            break;
        }
        cout << "�ֹ�>>";
        cin >> coffee >> num;
        if (strcmp(coffee, "����������") == 0) {
            cout << espresso(num) << "���Դϴ�. ���ְ� �弼��\n";
            sum += espresso(num);
        }
        else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
            cout << americano(num) << "���Դϴ�. ���ְ� �弼��\n";
            sum += americano(num);
        }
        else if (strcmp(coffee, "īǪġ��") == 0) {
            cout << cappuccino(num) << "���Դϴ�. ���ְ� �弼��\n";
            sum += cappuccino(num);
        }
        else {
            cout << "�Է��� �߸��Ѱ� ���ƿ�!\n";
        }
    }
}
int espresso(int num) {
    return num * 2000;
}
int americano(int num) {
    return num * 2300;
}
int cappuccino(int num) {
    return num * 2500;
}
