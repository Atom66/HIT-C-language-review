#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ϰ��6_18
//�˷���

int main(){
    int i,j;
    //��һ��
    for (i = 1;i < 10;i++)
        printf("%d\t",i);
    cout << endl;
    for (i = 1;i < 10;i++)
        printf("-\t");
    cout << endl;
    for (i = 1;i < 10;i++){
        for (j = 1;j < 10;j++){
            printf("%d\t",i*j);
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //�ڶ���
    for (i = 1;i < 10;i++)
        printf("%d\t",i);
    cout << endl;
    for (i = 1;i < 10;i++)
        printf("-\t");
    cout << endl;
    for (i = 1;i < 10;i++){
        for (j = 1;j < 10;j++){
            if (j<=i)
                printf("%d\t",i*j);
            else
                printf(" \t");
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    //������
    for (i = 1;i < 10;i++)
        printf("%d\t",i);
    cout << endl;
    for (i = 1;i < 10;i++)
        printf("-\t");
    cout << endl;
    for (i = 1;i < 10;i++){
        for (j = 1;j < 10;j++){
            if (j>=i)
                printf("%d\t",i*j);
            else
                printf(" \t");
        }
        cout << endl;
    }
    return 0;
}

