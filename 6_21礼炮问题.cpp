#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��6_21
//������

int main(){
    int i,n = 0;
    for (i=0;i<21*7;i++){
        if (i%5 == 0 && i < 5*21){//��������5��Լ��������5���ڵ����ڻ�δ����
            n++;
            continue;//�ؼ����ڴˣ��ô����������󣬲�������������������ж�����Ϊ�����غ�ֻ������һ��
        }
        if (i%6 == 0 && i < 6*21){
            n++;
            continue;
        }
        if (i%7 == 0 && i < 7*21){
            n++;
        }
    }
    cout << n << endl;
    return 0;
}

