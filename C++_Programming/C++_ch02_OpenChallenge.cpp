#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "�ι̿�>>";
	cin >> s;
	string t;
	cout << "�ٸ���>>";
	cin >> t;

	if (s == "����")
	{
		if (t == "����")
			cout << "�����ϴ�." << endl;
		else if (t == "����")
			cout << "�ٸ����� �̰���ϴ�." << endl;
		else if (t == "��")
			cout << "�ι̿��� �̰���ϴ�." << endl;
		else
			cout << "�ٸ����� ����Ͽ����ϴ�." << endl;
	}
	else if (s == "����")
	{
		if (t == "����")
			cout << "�ι̿��� �̰���ϴ�." << endl;
		else if (t == "����")
			cout << "�����ϴ�." << endl;
		else if (t == "��")
			cout << "�ٸ����� �̰���ϴ�." << endl;
		else
			cout << "�ٸ����� ����Ͽ����ϴ�." << endl;
	}
	else if (s == "��")
	{
		if (t == "����")
			cout << "�ٸ����� �̰���ϴ�." << endl;
		else if (t == "����")
			cout << "�ι̿��� �̰���ϴ�." << endl;
		else if (t == "��")
			cout << "�����ϴ�." << endl;
		else
			cout << "�ٸ����� ����Ͽ����ϴ�." << endl;
	}
	else
	{
		cout << "�ι̿��� ����Ͽ����ϴ�." << endl;
		if (t != "����" && t != "����" && t != "��") {
			cout << "�ٸ����� ����Ͽ����ϴ�." << endl;
			cout << "�����ϴ�." << endl;
		}
		else
			cout << "�ٸ����� �̰���ϴ�." << endl;

	}
}