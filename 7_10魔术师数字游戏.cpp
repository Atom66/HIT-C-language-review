#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��7_10
//ħ��ʦ������Ϸ

int Magic(int m){
    int a,b,c;
    for (a=1;a<=9;a++){
        for (b=0;b<=9;b++){
            for (c=0;c<=9;c++){
                if (122*a+212*b+221*c == m)
                    return 100*a+10*b+c;
            }
        }
    }
    return 0;
}
int main(){
    int m;
    cin >> m;
    int flag = Magic(m);
    if (flag)
        cout << "ԭ����������" << flag << endl;
    else
        cout << "������ˣ�" << endl;
    return 0;
}

