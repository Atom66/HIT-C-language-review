#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//�ж����������

int main(){
    float  a,b,c;
    cin >> a >> b >> c;
    if ((a+b>c && b+c>a && a+c>b) && (a>fabs(b-c) && b>fabs(a-c) && c>fabs(a-b))){
        if (a==b || a==c || b==c){
            if (a==b && b==c)
                cout << "�ȱ�������" << endl;
            else
                cout << "����������" << endl;
        }
        else if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
            if (a==b || a==c || b==c)
                cout << "����ֱ��������" << endl;
            else
                cout << "ֱ��������" << endl;
    else
        cout << "һ��������" << endl;
    }
    else
        cout << "����������" << endl;
	return 0;
}
