#include <iostream>

using namespace std;

#define Day 7 // �궨��

int main() {
    // �����ͳ���
    // 1��������ķ�ʽ -- �������� ������
    int count = 10;
    cout << count << endl;

    // 2���峣���ķ�ʽ
    // 2.1�궨�� ������main����
    cout << "һ��" << Day << "��";
    cout << endl;
    // Day = 100;  ���� �����޸� �ᱨ��

    // 2.2const���εı���Ҳ�ǳ���
    const int year = 365;
    cout << "һ����" << year << "��" << endl;
    // year = 366 ���������޸�
}