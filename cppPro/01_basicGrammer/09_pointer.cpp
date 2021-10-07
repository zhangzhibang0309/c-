//
// ���ս���--ָ�벹��ƻ�
//
#include "iostream"

using namespace std;

void swap2(int *p1, int *p2);

void bubbleSort(int *arr, int len);

int main() {
    // 1.ָ��Ķ���
    int a = 10;
    // ָ�붨����﷨ �������� * ָ���������
    int *p;
    // ��ָ���¼����a�ĵ�ַ
    p = &a;
    cout << "a�ĵ�ַΪ�� " << &a << endl;
    cout << "ָ��pΪ�� " << p << endl;

    // 2.ʹ��ָ��
    // ����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
    // ָ��ǰ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
    *p = 1000;
    cout << "a=" << a << endl;
    cout << "*p=" << *p << endl;

    // 3.�鿴ָ����ռ�ڴ�ռ�
    // ��32λ����ϵͳ�� ���е�ָ�붼ռ��4bytes
    // 64λ����ϵͳռ��8bytes
    cout << sizeof(int *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;
    cout << sizeof(char *) << endl;

    // 4.��ָ��
    // ��ָ�������ڳ�ʼ��ָ������� ָ����ڴ��ַΪ0
    // int *p4 = NULL;
    // ��ָ��ָ����ڴ治�ܷ��� ��Ϊ0-255���ڴ�ռ���ϵͳռ�õ� ������ȥʹ��
    // cout << *p4;  �ڴ��ַ0�ǲ���ȥ������

    // 5.Ұָ��
    // Ұָ������������� û������һ���ڴ� ֱ�Ӱ�һ��ָ��ָ��һ��Ƿ��ڴ�
    // int *p5 = (int *) 0x1100;
    // cout << *p5 << endl;

    cout << "----------" << "const����" << "----------" << endl;
    // 6.const����
    // const����ָ�� ����ָ��
    int a6 = 10;
    int b6 = 10;
    const int *p6 = &a6; // ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
    // *p6 = 20; ָ���ֵ�����Ը�
    p6 = &b6; // ָ����Ը�
    cout << *p6;
    // const���γ��� ָ�볣��
    int *const p66 = &a6;
    *p66 = 20; // ָ���ֵ���Ը�
    // p66 = &b6; ָ�򲻿��Ը�
    cout << *p66 << endl;
    // const������ָ�������γ���
    const int *const p666 = &a6;
    // *p666 = 20; �����޸�ָ����ڴ��ֵ
    // p666 = &b6; �����޸�ָ��ĵ�ַ

    cout << "----------" << "ָ�������" << "----------" << endl;
    // 7.ָ�������
    int arr7[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *p7 = arr7;
    cout << arr7[0] << endl;
    cout << *p7 << endl;
    cout << *p7 + 1 << endl;

    cout << "----------" << "ָ��ͺ���" << "----------" << endl;
    // 8.ָ��ͺ���
    int a8 = 10, b8 = 20;
    cout << "a8= " << a8 << " " << "b8= " << b8 << endl;
    swap2(&a8, &b8);
    cout << "a8= " << a8 << " " << "b8= " << b8 << endl;

    cout << "----------" << "����ʵ��ð��������Ҫ���ݵ�ַ ָ����գ�" << "----------" << endl;
    // 9.ð������function
    int arr9[10] = {1, 4, 2, 5, 10, 232, 22, 0, -3, 11};
    int len = sizeof(arr9) / sizeof(arr9[0]);
    bubbleSort(arr9, len);
    for (int i = 0; i < len; ++i) {
        cout << arr9[i] << " ";
    }
    cout << endl;
}

void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1 - i; ++j) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
