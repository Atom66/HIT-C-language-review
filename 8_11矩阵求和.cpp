#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define ROW 10
#define COL 10
//ϰ��8_10
//�������

int main(){
    int a[ROW][COL] = {0},b[ROW][COL] = {0},c[ROW][COL] = {0};
    int m,n,i,j;
    cout << "����������ģ��" ;
    cin >> m >> n;
    cout << endl << "������������ݣ�" << endl;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            cin >> b[i][j];
        }
    }
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "A + B = " << endl;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

