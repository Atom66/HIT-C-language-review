#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ʵ��6-1
//��������ŵ

int main(){
    //����һ��ֱ�Ӽ����ۼӵ�ͨ��
    int i = 0;
    double sum = 0,tmp = 1;//ֻ��double���Ͳ��ᷢ���������
    sum = pow(2,64) - 1;
    cout << "ֱ�Ӽ����ۼӵ�ͨ�" << sum << ",�൱��" << (float)sum / (1.42 * pow(10,8)) << "������" << endl;

    //������������ǰ��������
    sum = 0;
    for (;i<64;i++){
        sum += tmp;
        tmp *= 2;
    }
    cout << "����ǰ�������" << sum << ",�൱��" << (float)sum / (1.42 * pow(10,8)) << "������" << endl;
    return 0;
}

