#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//ϰ��5.8
//�ж��ַ�����

int main(){
    char c;
    cout << "please input the char" << endl;
    c = getchar();
    if (c >= 'a' && c <= 'z')
        cout << "Сд��ĸ" << endl;
    else if (c >= 'A' && c <= 'Z')
        cout << "��д��ĸ" << endl;
    else if (c >= '0' && c <= '9')
        cout << "����" << endl;
    else if (c == ' ')
        cout << "�ո�" << endl;
    else
        cout << "�����ַ�" << endl;
	return 0;
}
