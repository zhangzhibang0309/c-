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

    cout<<"--------"<<"һά���鰸����ϰ"<<"--------";
    // 3.һά���鰸����ϰ
    // ���鵹��
    int arr5[5] = {1, 3, 2, 4, 5};
    int start = 0;
    int end = sizeof(arr5) / sizeof(arr5[0]) - 1;
    for (int i = 0; i < (end + 1) / 2; ++i) {
        int temp;
        temp = arr5[i];
        arr5[i] = arr5[end - i];
        arr5[end - i] = temp;
    }
    for (int i = 0; i < end + 1; ++i) {
        cout<<arr5[i]<<" ";
    }

}

