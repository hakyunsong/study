// 2021271424 �̷������Ƽ�а� ������
// ����01_ch02_02.cpp

#include <iostream>
using namespace std;

int main()
{
    float num[5], max;
    int i;
    cout << "5���� �Ǽ��� �Է��϶�>>";
    for (i = 0; i < 5; i++)
    {
        cin >> num[i];
    }

    max = num[0];
    for (i = 1; i < 5; i++)if (max < num[i])max = num[i];
    cout << "���� ū �� = [" << max << "]" << endl;

    return 0;
}