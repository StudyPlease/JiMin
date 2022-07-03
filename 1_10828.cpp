/* 1주차 자료구조 스터디 어려운 문제 - 10828번 문제 */
/* 사용할 자료구조 : 스택 */
#include <iostream>
#include <string>
using namespace std;
#define MAX 10000					// 스택의 최대 크기 정의

class Stack 
{
	int arr[MAX];				// 최대 크기만큼 배열 생성
	int size;					// 스택에 저장된 정수의 수
	int key;					// top에 저장된 정수의 index
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
	cin >> repeat;						// 명령을 입력받을 횟수
	cin.ignore();						// 버퍼 무시
	string cmd;							// 명령을 저장할 문자열

	for (int i = 0; i < repeat; i++)
	{
		getline(cin, cmd);				// 명령을 입력받음
		if (cmd.find(" ") != string::npos)				// 명령에 공백이 있다면 -> 명령에 공백이 있는 건 push 뿐이다
		{												// str.find(검색할 값)은 검색 값이 있는 경우 index를 반환. 없는 경우 string::nopos(쓰레기값)을 반환
			int space_index = cmd.find(" ");		// 문자열 분리 기준이 될 index 값을 저장
			string cmd1 = cmd.substr(space_index + 1);			// cmd1은  push할 정수 값을 저장
			int cmd_num = stoi(cmd1);							// 문자열 -> 정수 로 변환, stoi : string to integer

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