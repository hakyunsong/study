// 2021271424 �̷������Ƽ�а� ������
// ����01_ch02_03.cpp

#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char text[100];
    cout << "���ڿ� �Է�>>";
    cin.getline(text, 100);
    for (int i = 0; i < strlen(text); ++i) {
        for (int j = 0; j < i + 1; ++j)
            cout << text[j];
        cout << endl;
    }
}
