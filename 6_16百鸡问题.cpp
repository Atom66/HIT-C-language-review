#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��6_16
//�ټ�����

int main(){
    int i,j;
    for (i = 0;i < 100;i++){
        for (j = 0;j < 100 - i;j++){
            if (((100-i-j)%3 == 0) && (5*i + 3*j + (100-i-j)/3 == 100))
                printf("������%d,ĸ����%d,С����%d\n",i,j,100-i-j);
        }
    }
    return 0;
}

