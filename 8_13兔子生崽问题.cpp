#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 12

//ϰ��8_13
//��������

int main(){
    int a[N][2];//���� ����
    int i,j;
    a[0][0] = 1;//month 1
    a[0][1] = 0;
    for (i=1;i<N;i++){
        a[i][0] = a[i-1][0] + a[i-1][1];//��������������һ���³�����������һ������������
        a[i][1] = a[i-1][0];//��������������һ���³�������
    }
    cout << "һ���Ժ���" << a[11][1] + a[11][0] << "ֻ����" << endl;
    return 0;
}

