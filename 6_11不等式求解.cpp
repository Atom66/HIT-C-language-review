#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��6_11
//����ʽ���

int main(){
    float n,tmp = 1;
    cout << "please input n" << endl;
    cin >> n;
    int m = 1,sum = 0;
    while (1){
        tmp *= m;
        sum += tmp;
        if (sum >= n)
            break;
        m++;
    }
    cout << "m <= " << --m << endl;//����ѭ��ʱ����ʽ�Ѿ��������ˣ�����mҪ��һ
    return 0;
}

