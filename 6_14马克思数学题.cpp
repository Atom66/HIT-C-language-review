#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��6_14
//���˼��Ȥζ��ѧ��

int main(){
    int i,j;
    for (i = 0;i < 30;i++){
        for (j = 0;j < 30 - i;j++){
            if (3 * i + 2 * j + (30 - i - j) == 50){
                printf("male:%d,female:%d,child:%d\n",i,j,30-i-j);
            }
        }
    }
    return 0;
}

