//
// ���￪ʼѧϰarray����Ȼ�ܻ�������һЩϸ����Ҫע�⣬�����һ��Ǿ�����ϸѧϰһ�¡�
//
#include <iostream>

using namespace std;

int main() {
    // 1.���ֶ��巽ʽ
    // 1.1�������� ������[���鳤��];
    int arr1[5];
    arr1[0] = 0;
    arr1[1] = 1;
    arr1[2] = 2;
    arr1[3] = 3;
    arr1[4] = 4;
    cout << arr1[1] << endl;

    // 1.2�������� ������[���鳤��] = {ֵ1��ֵ2��ֵ3����};
    int arr2[5] = {00, 11, 22, 33, 44,};
    cout << arr2[3] << endl;

    // 1.3�������� ������[] = {ֵ1��ֵ2��ֵ3��������};
    int arr3[] = {000, 111, 222, 333, 444, 555, 666, 777, 888};
    cout << arr3[2] << endl;

    cout << "--------" << "�������������÷�" << "--------" << endl;
    // 2.���������÷�--ͳ������ռ���ڴ� �鿴�����׵�ַ
    // 2.1�鿴ռ���ڴ����
    int arr4[5] = {1, 2, 3, 4, 5};
    cout << "��������ռ���ڴ�ռ�Ϊ�� " << sizeof(arr4) << endl;
    cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ�� " << sizeof(arr4[0]) << endl;
    cout << "������Ԫ�صĸ���Ϊ�� " << sizeof(arr4) / sizeof(arr4[0]) << endl;
    // 2.2�鿴�����׵�ַ
    cout << "�����׵�ַΪ�� " << (int) arr4 << endl;
    cout << "�����һ��Ԫ�ص�ַΪ�� " << (int) &arr4[0] << endl;
    cout << "����ڶ���Ԫ�ص�ַΪ�� " << (int) &arr4[1] << endl;

    cout << "--------" << "һά���鰸����ϰ" << "--------" << endl;
    // 3.һά���鰸����ϰ
    // ���鵹��
    int arr5[5] = {1, 3, 2, 4, 5};
    int start = 0;
    int end = sizeof(arr5) / sizeof(arr5[0]) - 1;
    while (start < end) {
        int temp = arr5[start];
        arr5[start] = arr5[end];
        arr5[end] = temp;

        start++;
        end--;
    }
    for (int i = 0; i < 5; ++i) {
        cout << arr5[i] << " ";
    }
    cout << endl;
    // ð������
    int arrBubb[] = {1, 5, 2, 8, -2, 33, 1, 3};
    int bubbLen = sizeof(arrBubb) / sizeof(arrBubb[0]);
    // �˸�Ԫ�� ������bubbLen-1���� ÿ�˱Ƚ�j-i-1(��Ϊiһ��ʼ������)
    for (int i = 0; i < bubbLen - 1; ++i) {
        for (int j = 0; j < bubbLen - i - 1; ++j) {
            if (arrBubb[j] > arrBubb[j + 1]) {
                int temp = arrBubb[j];
                arrBubb[j] = arrBubb[j + 1];
                arrBubb[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < bubbLen; ++i) {
        cout << arrBubb[i] << " ";
    }
    cout << endl;

    cout << "--------" << "��ά����Ķ���" << "--------" << endl;
    // 4.��ά���鶨�巽ʽ
    // 4.1 �������� ������[����][����]
    int arrTD[2][3];
    arrTD[0][0] = 1;
    arrTD[0][1] = 2;
    arrTD[0][2] = 3;
    arrTD[1][0] = 4;
    arrTD[1][1] = 5;
    arrTD[1][2] = 6;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arrTD[i][j] << " ";
        }
        cout << endl;
    }
    // 4.2 �������� ������[����][����] = {{����1������2����}��{����x������x����}}
    int arrTD2[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arrTD2[i][j] << " ";
        }
        cout << endl;
    }
    // 4.3 �������� ������[����][����] = {����1������2������3������4����}
    int arrTD3[2][3] = {1,
                        2,
                        3,
                        4,
                        5,
                        6}; // �Զ�����������
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arrTD3[i][j] << " ";
        }
        cout << endl;
    }
    // 4.4 �������� ������[][����] = {����1������2������3������4����}  ����ֻ��ʡ������ ����ʡ������
    int arrTD4[][3] = {1, 2, 3, 4, 5, 6}; // �Զ��ж�����
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arrTD4[i][j] << " ";
        }
        cout << endl;
    }

    cout << "--------" << "��ά�����������÷�" << "--------" << endl;
    // 5.ʹ�ö�ά������û���--�鿴����ռ���ڴ�ռ����� �鿴��ά������׵�ַ
    int arrRam[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };

    // 5.1�鿴�ڴ�ռ�����
    cout << "��ά����ռ���ڴ�ռ䣺 " << sizeof(arrRam) << endl;
    cout << "��ά�����һ��ռ���ڴ棺 " << sizeof(arrRam[0]) << endl;
    cout << "��ά�����һ��Ԫ��ռ���ڴ棺 " << sizeof(arrRam[0][0]) << endl;

    cout << "��ά��������Ϊ�� " << sizeof(arrRam) / sizeof(arrRam[0]) << endl;
    cout << "��ά��������Ϊ�� " << sizeof(arrRam[0]) / sizeof(arrRam[0][0]) << endl;
    // 5.2�鿴��ά������׵�ַ
    cout << "��ά������׵�ַ�� " << (int) arrRam << endl;
    cout << "��ά�����һ���׵�ַ�� " << (int) arrRam[0] << endl;
    cout << "��ά����ڶ����׵�ַ�� " << (int) arrRam[1] << endl;

    cout << "��ά�����һ��Ԫ���׵�ַ�� " << (int) &arrRam[0][0] << endl;
    cout << "��ά����ڶ���Ԫ���׵�ַ�� " << (int) &arrRam[0][1] << endl;
}