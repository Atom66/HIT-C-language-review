#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

//�ַ���������������洢
void Inverse1(string a){
    string res;
    int i = a.length();
    for (i = a.length()-1;i>=0;i--)
        cout << a[i];
    return;
}

//�ַ���������洢��ԭ������
string Inverse2(string a){
    char c = ' ';
    int i = 0,j = a.length() - 1;//head pointer and tail pointer
    while (i < j){//loop until i >= j
        c = a[i];
        a[i] = a[j];
        a[j] = c;
        i++;j--;

    }
    return a;
}

//�ַ���������Կո�Ϊ�ֽ�����
void Inverse3(string a){
    int i = 0;
    string t = "";
    while (i < a.length()){
        t = "";
        while(a[i] != ' ' && i < a.length())
            t += a[i++];
        Inverse1(t);
        i++;
        cout << " ";
    }
}

int main(){
	string a;
	cout << "please input the string:" << endl;
	cin >> a;
	Inverse1(a);
	cout << "please input the string:" << endl;
	cin >> a;
	a = Inverse2(a);
	cout << "please input the string:" << endl;
	getline(cin,a);
	Inverse3(a);
	return 0;
}
