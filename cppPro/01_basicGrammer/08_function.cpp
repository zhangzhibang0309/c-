//
// ���︴ϰһ�º������÷�
//
#include <iostream>
#include "headerDocument/swap2.h" // �����Զ���ͷ�ļ�

using namespace std;

int add(int num1, int num2) { // ������������б����β�
    return num1 + num2;
}

void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "���������У� " << "num1�� " << num1 << "num2: " << num2 << endl;
}

// ��������
void sayHi();

void sayHi(); // ��������ֻ����һ�� �����������Զ��
//void swap2(int a1,int a2);
int main() {
    // 1.�����Ķ��岢����
    int num1 = 1, num2 = 2;
    cout << add(num1, num2) << endl; // ����Ĳ���ʵ��

    // 2.ֵ����
    // ֵ���ݵ�ʱ���β���ô�仯��������Ӱ��ʵ��
    cout << "��������ǰ�� " << "num1�� " << num1 << "num2: " << num2 << endl;
    swap(num1, num2);
    cout << "�������ú� " << "num1�� " << num1 << "num2: " << num2 << endl;
    // �����ԭ������β�Ҳ�����ڴ����濪�����µĿռ䣬����������ָ��ʵ�εĵ�ַ�����Բ�ͬ�ĵ�ַ��ֵ�����ı䣬����û��Ӱ�졣

    // 3.��������
    // һ����˵ ��������д�ڵ��ú�����λ��֮ǰ ����������˺������� ��������Ϳ����ڵ���֮��
    sayHi();

    // 4.�Զ���ͷ�ļ�
    cout << "----------" << "�����Զ���ͷ�ļ��еĺ���" << "----------" << endl;
    int a = 2, b = 3;
    swap2(a, b);
}

void sayHi() {
    cout << "hello" << endl;
}