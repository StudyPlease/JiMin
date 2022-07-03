/* 1���� �ڷᱸ�� ���͵� ����� ���� - 10828�� ���� */
/* ����� �ڷᱸ�� : ���� */
#include <iostream>
#include <string>
using namespace std;
#define MAX 10000					// ������ �ִ� ũ�� ����

class Stack 
{
	int arr[MAX];				// �ִ� ũ�⸸ŭ �迭 ����
	int size;					// ���ÿ� ����� ������ ��
	int key;					// top�� ����� ������ index
public:
	Stack()
	{
		{
			size = 0;
			key = -1;
		}
	}
	void push(int x)
	{
		arr[++key] = x;
		size++;
	}
	void pop()
	{
		if (IsEmpty() == 1)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << arr[key--] << endl;
			size--;
		}
	}
	void top()
	{
		if (IsEmpty() == 1)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << arr[key] << endl;
		}
	}

	bool IsEmpty()
	{
		if (size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int GetSize()
	{
		return size;
	}
};

int main()
{
	Stack s1;
	int repeat;
	cin >> repeat;						// ����� �Է¹��� Ƚ��
	cin.ignore();						// ���� ����
	string cmd;							// ����� ������ ���ڿ�

	for (int i = 0; i < repeat; i++)
	{
		getline(cin, cmd);				// ����� �Է¹���
		if (cmd.find(" ") != string::npos)				// ��ɿ� ������ �ִٸ� -> ��ɿ� ������ �ִ� �� push ���̴�
		{												// str.find(�˻��� ��)�� �˻� ���� �ִ� ��� index�� ��ȯ. ���� ��� string::nopos(�����Ⱚ)�� ��ȯ
			int space_index = cmd.find(" ");		// ���ڿ� �и� ������ �� index ���� ����
			string cmd1 = cmd.substr(space_index + 1);			// cmd1��  push�� ���� ���� ����
			int cmd_num = stoi(cmd1);							// ���ڿ� -> ���� �� ��ȯ, stoi : string to integer

			s1.push(cmd_num);
		}
		else if (cmd == "pop")
		{
			s1.pop();
		}
		else if (cmd == "top")
		{
			s1.top();
		}
		else if (cmd == "empty")
		{
			cout << s1.IsEmpty() << endl;
		}
		else if (cmd == "size")
		{
			cout << s1.GetSize() << endl;
		}

	}

	return 0;
}