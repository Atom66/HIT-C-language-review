#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//ʵ��5.2
//���Ԥ��

int main(){
    float weight,height;
    cout << "please input your weight and height" << endl;
    cin >> height >> weight;
    float t = weight / pow(height,2);
    cout << "��ָ����" << t << endl;
    if (t < 18)
        cout << "������" << endl;
    else if (t <25)
        cout << "��������" << endl;
    else if (t < 27)
        cout << "��������" <<endl;
    else
        cout << "����" << endl;
	return 0;
}
