#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int extra=0;
int search3(string, int);//�ж�><��
int search3(string b, int len) {
	int temp, flag = 1;
	for (int i = 0; i <= len - 1; i++) {
		if (b[i] == '>' || b[i] == '<') {
			temp = i;
			for (int j = temp - 1, k = temp + 1; j >= 0 && k < len - 2; j--, k++) {
				if (!(isdigit(b[j]))) {
					cout << "�﷨�����ڵ�" << j + 1 << "��" << endl;
					flag = 0;
				}
				else if (!(isdigit(b[k]))) {
					cout << "�﷨�����ڵ�" << k + 1 << "��" << endl;
					flag = 0;
				}
			}
		}
	}
	return flag;
}
int search1(string, int);//�ж�>= <=�� ==��
int search1(string b, int len) {
	int temp, flag = 1;
	for (int i = 0; i <= len - 1; i++) {
		if ((b[i] == '>' && b[i + 1] == '=') || (b[i] == '<' && b[i + 1] == '=')|| (b[i] == '=' && b[i + 1] == '=')) {
			temp = i; extra = 1;
			for (int j = temp - 1, k = temp + 2; j >= 0 && k < len - 2; j--, k++) {
				if (!(isdigit(b[j]))) {
					cout << "�﷨�����ڵ�" << j + 1 << "��" << endl;
					flag = 0;
				}
				else if (!(isdigit(b[k]))) {
					cout << "�﷨�����ڵ�" << k + 1 << "��" << endl;
					flag = 0;
				}
			}
		}
	}
	return flag;
}
int search4(string, int);//�жϷֺ�
int search4(string b, int len) {
	int flag = 1;
	if (b[len - 2] != ';') {
		cout << "�﷨����,�ڵ�" << len - 1 << "��" << endl;
		flag = 0;
	}
	else if (b[len - 2] == ';' && !isdigit(b[len - 3])) {
		cout << "�﷨����,�ڵ�" << len - 2 << "�к͵�" << len - 1 << "��֮��" << endl;
		flag = 0;
	}
	return flag;
}
int search5(string, int);
int search5(string b, int len) {
	int flag = 1;
	if (!isdigit(b[0])) {
		cout << "�﷨����,�ڵ�1��" << endl;
		flag = 0;
	}
	return flag;
}
int main() {
	cout << "������һ���ַ���" << endl;
	cout << "<��Ȼ��><�жϷ���><��Ȼ��><Ӣ�ķֺ�> " << endl;
	string a, b;
	int len, flag1, flag2, flag3, flag4, flag5,select=0;
	b = '\0';
	cin >> a;
	b = a + b;
	len = b.length();
	flag1 = search1(b, len);
	if (!extra) //˫�����ƹ������ż�� ��extra���޸�Ϊ1
	{
		flag3 = search3(b, len);//��û���޸����жϵ�����
	}
	else select = 1;//˫���ż����ȷ��ʽ
	flag4 = search4(b, len);
	flag5 = search5(b, len);
	if (select == 1) {
		if (flag1  && flag4 && flag5) {
			cout << "�﷨��ȷ" << endl;
			system("pause");
			return 0;
		}
	}
	else {
		if (flag1 && flag3 && flag4 && flag5) {
			cout << "�﷨��ȷ" << endl;
			system("pause");
			return 0;
		}
	}
}