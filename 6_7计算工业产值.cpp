#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��6_6
//���㹤ҵ��ֵ

int main(){
    float rate,base = 100;
    cin >> rate;
    int year = 0;
    while (base < 200){//fabs(base - 200) > 0.01����ж���������
        base = base * (1 + rate);
        year++;
    }
    cout << year << endl;
    return 0;
}

