#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��7_7
//�����Լ��

//����һ ��ٷ�
int GCD_1(int a,int b){
    int i=a<b?a:b;
    for (;i>0;i--){
        if (a%i == 0 && b%i == 0)
            return i;
    }
    return 1;
}

//������ ŷ������㷨
int GCD_2(int a,int b){
    int r = a % b;
    while (r != 0){
        a = b;
        b = r;
        r = a % b;
    }
   return b;
}

//������ �ݹ鷽��
int GCD_3(int a,int b){
    if (a>b)
        return GCD_3(a-b,b);
    else if (a<b)
        return GCD_3(a,b-a);
    else
        return a;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << "��ٷ���" << GCD_1(a,b) << endl;
    cout << "ŷ������㷨��" << GCD_2(a,b) << endl;
    cout << "�ݹ鷽����" << GCD_3(a,b) << endl;
    return 0;
}

