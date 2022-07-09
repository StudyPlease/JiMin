/* 2���� �ڷᱸ�� ���͵� - 9093�� ���� */
// ��� 1) C++ <algorithm> reverse �Լ��� ������� �ʰ�
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void reverseWord(string str, char* strpiece_reverse);

int main()
{
	int num;						// �׽�Ʈ ���̽� ���� T 
	cin >> num;
	cin.ignore();					// ���� ����
	string str, str_piece;
	char* strpiece_reverse;			// ���� �迭 �����Ҵ��� ������

	for (int i = 0; i < num; i++)
	{
		getline(cin, str);			// ���� �ϳ� �Է¹���

		while (str.find(" ") != string::npos)
		{
			str_piece = str.substr(0, str.find(" "));					// ������ �������� �ܾ �и�
			strpiece_reverse = new char[str_piece.length() + 1];				// �ܾ��� ���̸�ŭ ���� �迭 �����Ҵ�, �ܾ� ���� ���� - str.length()�� str.size() �Լ� ���
			reverseWord(str_piece, strpiece_reverse);

			cout << " ";

			str = str.substr(str.find(" ") + 1);						// �Է¹��� ���忡�� �߶� �ܾŭ ���ܽ�Ŵ
		}

		strpiece_reverse = new char[str.length() + 1];
		reverseWord(str, strpiece_reverse);								// ���ڿ��� �� �̻� ������ ��� while���� �������� ���̹Ƿ� ���������� ������ �ܾ� �ϳ��� ��������
		cout << endl;

	}

	return 0;
}

void reverseWord(string str, char* strpiece_reverse)
{
	strcpy(strpiece_reverse, str.c_str());								// ���� �迭�� ���ڿ� ���� - strcpy(str1,str2) : str1�� str2 ���� , c_str() : ���ڿ��� ���ڷ� ��ȯ

	for (int j = str.length() - 1; j >= 0; j--)								// ���� �迭 �Ųٷ� ���
	{
		cout << strpiece_reverse[j];
	}

}

// ��� 2) C++ <algorithm> reverse �Լ��� ����ؼ�
/*
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int num;						// �׽�Ʈ ���̽� ���� T 
	cin >> num;
	cin.ignore();					// ���� ����
	string str, str_piece;

	for (int i = 0; i < num; i++)
	{
		getline(cin, str);			// ���� �ϳ� �Է¹���

		while (str.find(" ") != string::npos)
		{
			str_piece = str.substr(0, str.find(" "));					// ������ �������� �ܾ �и�
			reverse(str_piece.begin(), str_piece.end());				// ���ڿ��� ������ �Լ� reverse : ������� algorithm�� ����Ǿ�����. reverse(str.begin(),str.end())�� �������� ���
			cout << str_piece;

			cout << " ";

			str = str.substr(str.find(" ") + 1);						// �Է¹��� ���忡�� �߶� �ܾŭ ���ܽ�Ŵ
		}

		reverse(str.begin(), str.end());								// ���ڿ��� �� �̻� ������ ��� while���� �������� ���̹Ƿ� ���������� ������ �ܾ� �ϳ��� ��������
		cout << str << endl;

	}

	return 0;
}

*/