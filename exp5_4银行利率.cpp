#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

#define EPS = 1e-1

//ϰ��5.4
//������Ϣ�뱾��

int main(){
    float base;//����
    int n;//����
    float res;
    cout << "���뱾�������" <<endl;
    cin >> base >> n;
    if (n <= 1)
        res = pow(1+0.0225,n) * base;
    else if (n <= 2)
        res = pow(1+0.0243,n) * base;
    else if (n <= 3)
        res = pow(1+0.027,n) * base;
    else if (n <= 5)
        res = pow(1+0.0288,n) * base;
    else if (n <= 8)
        res = pow(1+0.3,n) * base;
    cout << res << endl;
	return 0;
}
