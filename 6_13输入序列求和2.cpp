#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��6_12
//���������еĺ�

int main(){
    float a,sum = 0;
    while (1){
        cin >> a;
        if (a > 0)
            sum += a;
        else if (a < 0)
            continue;
        else{
            cout << "������ֹ" << endl;
            break;
        }
    }
    cout << "sum = " << sum << endl;
    return 0;
}

