#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��7_11
//�Ŵ������Ϸ

int Game(int n){
    srand(time(NULL));
    if (n%3 == 1)
        cout << 30-n-- << endl;
    else if (n%3 == 2)
        cout << 30-n-- << endl << 30-n-- << endl;
    else{
        if (rand() % 2 == 1)
            cout << 30-n-- << endl;
        else
            cout << 30-n-- << endl << 30-n-- << endl;
    }
}
int main(){
    int a,b,n = 30;//���������������
    while(n >0){
        scanf("%d",&a);
        if (a)
            n--;
        scanf("%d",&b);
        if (b)
            n--;
        Game(n);
    }
    return 0;
}

