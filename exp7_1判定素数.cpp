#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//ʵ��7_1
//�ж�����

//���̷��ж�����
bool IsPrime_1(int n){
    int i = 2;
    for (;i<n;i++){
        if (n%i == 0)
            return true;//��������
    }
    return false;//������
}

//��С���̷����ж���Χ
bool IsPrimer_2(int n){
    int i = 2;
    for (;i<sqrt(n);i++){
        if (n%i == 0)
            return true;//��������
    }
    return false;//������
}
int main(){
    int n;
    cin >> n;
    if (IsPrime_1(n))
        cout << n << " is not a prime number." << endl;
    else
        cout << n << " is a prime number." << endl;
    cout << "-----------------------------------" << endl;
    if (IsPrime_1(n))
        cout << n << " is not a prime number." << endl;
    else
        cout << n << " is a prime number." << endl;
    return 0;
}

