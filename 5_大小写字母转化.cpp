#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//ϰ��5.7
//��Сд��ĸת��

int main(){
    int a;
    char c;
    cout << "please input the letter" << endl;
    cin >> c;
    a = c;
    if (a <= 122 && a >= 97)
        c = c - 32;
    else if (a <= 90 && a >= 65)
        c = c + 32;
    a = c;//Ҫע�⣬����ķ���ĸ������Ӣ���ַ�
    cout << c << " " << a << endl;
	return 0;
}
