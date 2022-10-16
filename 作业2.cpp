#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int extra=0;
int search3(string, int);//判断><号
int search3(string b, int len) {
	int temp, flag = 1;
	for (int i = 0; i <= len - 1; i++) {
		if (b[i] == '>' || b[i] == '<') {
			temp = i;
			for (int j = temp - 1, k = temp + 1; j >= 0 && k < len - 2; j--, k++) {
				if (!(isdigit(b[j]))) {
					cout << "语法错误，在第" << j + 1 << "列" << endl;
					flag = 0;
				}
				else if (!(isdigit(b[k]))) {
					cout << "语法错误，在第" << k + 1 << "列" << endl;
					flag = 0;
				}
			}
		}
	}
	return flag;
}
int search1(string, int);//判断>= <=号 ==号
int search1(string b, int len) {
	int temp, flag = 1;
	for (int i = 0; i <= len - 1; i++) {
		if ((b[i] == '>' && b[i + 1] == '=') || (b[i] == '<' && b[i + 1] == '=')|| (b[i] == '=' && b[i + 1] == '=')) {
			temp = i; extra = 1;
			for (int j = temp - 1, k = temp + 2; j >= 0 && k < len - 2; j--, k++) {
				if (!(isdigit(b[j]))) {
					cout << "语法错误，在第" << j + 1 << "列" << endl;
					flag = 0;
				}
				else if (!(isdigit(b[k]))) {
					cout << "语法错误，在第" << k + 1 << "列" << endl;
					flag = 0;
				}
			}
		}
	}
	return flag;
}
int search4(string, int);//判断分号
int search4(string b, int len) {
	int flag = 1;
	if (b[len - 2] != ';') {
		cout << "语法错误,在第" << len - 1 << "列" << endl;
		flag = 0;
	}
	else if (b[len - 2] == ';' && !isdigit(b[len - 3])) {
		cout << "语法错误,在第" << len - 2 << "列和第" << len - 1 << "列之间" << endl;
		flag = 0;
	}
	return flag;
}
int search5(string, int);
int search5(string b, int len) {
	int flag = 1;
	if (!isdigit(b[0])) {
		cout << "语法错误,在第1列" << endl;
		flag = 0;
	}
	return flag;
}
int main() {
	cout << "请输入一个字符串" << endl;
	cout << "<自然数><判断符号><自然数><英文分号> " << endl;
	string a, b;
	int len, flag1, flag2, flag3, flag4, flag5,select=0;
	b = '\0';
	cin >> a;
	b = a + b;
	len = b.length();
	flag1 = search1(b, len);
	if (!extra) //双符号绕过单符号检查 当extra被修改为1
	{
		flag3 = search3(b, len);//若没被修改则判断单符号
	}
	else select = 1;//双符号检查正确方式
	flag4 = search4(b, len);
	flag5 = search5(b, len);
	if (select == 1) {
		if (flag1  && flag4 && flag5) {
			cout << "语法正确" << endl;
			system("pause");
			return 0;
		}
	}
	else {
		if (flag1 && flag3 && flag4 && flag5) {
			cout << "语法正确" << endl;
			system("pause");
			return 0;
		}
	}
}