#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

//����һԪ���η��̵ĸ�

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==0){
        cout << "�÷��̲���һԪ���η���" << endl;
        return 0;
    }
    float p = - (float)b / (2 * a);
    float t = pow(b,2) - 4 * a * c;
    float q  = sqrt(fabs(t)) / (2 * a);
    if (t == 0)
        cout << "x_1 = x_2 = " << p << endl;
    else if(t > 0)
        cout << "x_1 = " << p + q << ",x_2 = " << p - q << endl;
    else//t<0
        cout << "x_1 = " << p << " + " << q << "i" << ",x_2 = " << p << " - " << q << "i" << endl;
	return 0;
}
