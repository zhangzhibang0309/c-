#include <iostream>

using namespace std;

int main() {
    cout << "----------" << "1.����" << "----------" << endl;
    // 1.���� �Լ�sizeof()����
    // 1.1������
    short sCount = 1; // �����ֽ� -2^15-2^15-1
    cout << "sCount" << sCount << endl;
    cout << "sizeof(short):" << sizeof(short) << " sizeof(sCount)" << sizeof(sCount) << endl;
    // 1.2����
    int iCount = 2; // �ĸ��ӽ� -2^31-2^31-1
    cout << "iCount" << iCount << endl;
    cout << "sizeof(int):" << sizeof(int) << " sizeof(iCount)" << sizeof(iCount) << endl;
    // 1.3������
    long lCount = 3; // windows�ĸ��ֽ� -2^31-2^31-1    Linux�ĸ��ֽڣ�32��-- �˸��ӽڣ�64��
    cout << "lCount" << lCount << endl;
    cout << "sizeof(long):" << sizeof(long) << " sizeof(lCount)" << sizeof(lCount) << endl;
    // 1.4��������
    long long llCount = 4; // �˸��ӽ� -2^63-2^63-1
    cout << "llCount" << llCount << endl;
    cout << "sizeof(long long):" << sizeof(long long) << " sizeof(llCount)" << sizeof(llCount) << endl;

    cout << "----------" << "2.ʵ��" << "----------" << endl;
    // 2.ʵ��
    // 2.1 float
    float fCount = 3.14; // �ĸ��ֽ� ��λ��Ч����
    cout << fCount << endl;
    // 2.2 double
    double dCount = 3.14; // �˸��ֽ� 15~16λ��Ч����
    cout << dCount << endl;
    // 2.3 ͳ��ռ���ڴ�ռ�
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    // 2.4 ��ѧ������
    float f2 = 3e2; // 3*10^2
    float f3 = 3e-2; // 3*0.1^2
    cout << "f2: " << f2 << "\t" << "f3: " << f3 << endl;

    cout << "----------" << "3.�ַ���" << "----------" << endl;
    // 3.�ַ���
    // 1.�����ַ���
    char ch = 'a';
    cout << ch << endl;
    // 2.�ַ��ͱ�����ռ�ڴ��С
    cout << "sizeof(char): " << sizeof(ch) << endl;
    // 3.��������
    // char ch2 = "b"; charҪ��''
    // char ch2 = 'abcde'; charֻ����һ���ַ�
    // 4.�ַ��ͱ�����ӦASCII����
    // a-97
    char ch2 = 'a';
    cout << (int) ch2 << endl;

    cout << "----------" << "4.ת���ַ�" << "----------" << endl;
    // 4.ת���ַ�
    // \n ����
    cout << "hello\nworld" << endl;
    // \\ ��б��
    cout << "\\" << endl;
    // \t �����Ʊ� �ɶ���
    cout << "hello\t aaaaa" << endl;
    cout << "he\t aaaaa" << endl;
    cout << "hellooo\t aaaaa" << endl;

    cout << "----------" << "5.�ַ���" << "----------" << endl;
    // 5.�ַ���
    // һ����char []   ��һ����string����Ҫͷ�ļ�<string>
    // �Ƚϼ� �Ͳ�д��

    cout << "----------" << "6.bool" << "----------" << endl;
    // 6.��������
    bool flag = true;
    bool flagE = false;
    // ռһ���ֽ�
}