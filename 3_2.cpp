#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

/*  ϰ��3.2 ��λ���������򣬸������Ǿ���ֵ*/
int InverseOrd(int a){
	int i,j,k;
	i = a % 10;//��λ
	k = a / 100;//��λ
	j = (a - k * 100 - i) / 10;//ʮλ
	return i*100+j*10+k;
}

int main(){
	int a = 0;
	string s;
	cout << "please input the number:" << endl;
	cin >> a;
	cout << InverseOrd(a) << endl;
	return 0;
}
