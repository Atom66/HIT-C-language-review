#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��6_6
//����������

//��������Ĵ������ y5 = 1000 / (1 + 12 * rate)
//��������Ĵ������ y4 = (1000 + y5) / (1 + 12 * rate)
// ......
////��n����Ĵ������ yn = (1000 + y_n-1) / (1 + 12 * rate)

int main(){
    float rate = 0.01875,base = 0;
    int i;
    for (i = 0;i<5;i++)
        base = (base + 1000) / (1 + 12 * rate);
    cout <<base;
    return 0;
}

