#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��6_19
//�����̺�İ����

int main(){
    int i = 1;
    int sum = 0,tmp = 1;
    for (i = 1;i < 31;i++){
        sum += tmp;
        tmp *= 2;
    }
    printf("���̸�Ǯ��%dw  İ���˸�Ǯ��%fw\n",10*30,(float)sum/1000000);
    return 0;
}

