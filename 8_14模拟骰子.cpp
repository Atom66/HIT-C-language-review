#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 6000

//ϰ��8_14
//ģ������

int main(){
    srand(time(NULL));
    int i,a,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
    for (i=0;i<N;i++){
        a = rand() % 6 + 1;
        switch (a){
        case 1:
            s1++;
            break;
        case 2:
            s2++;
            break;
        case 3:
            s3++;
            break;
        case 4:
            s4++;
            break;
        case 5:
            s5++;
            break;
        case 6:
            s6++;
            break;
        default:
            break;
        }
    }
    cout << "1�ĸ��ʣ�" << (float)s1/N << endl;
    cout << "2�ĸ��ʣ�" << (float)s2/N << endl;
    cout << "3�ĸ��ʣ�" << (float)s3/N << endl;
    cout << "4�ĸ��ʣ�" << (float)s4/N << endl;
    cout << "5�ĸ��ʣ�" << (float)s5/N << endl;
    cout << "6�ĸ��ʣ�" << (float)s6/N << endl;
    return 0;
}

