#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��7_4
//��ٷ���������������С������

int LCM(int a,int b){
    int i = a>b?a:b;
    for (;i < a*b;i++){
        if (a%b==0 || b%a==0)
            return a>b?a:b;
        if (i%a == 0 && i%b == 0)
            return i;
    }
    return a*b;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << a << "��" << b << "����С������Ϊ" << LCM(a,b) << endl;
    return 0;
}

