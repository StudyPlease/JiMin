/* 3주차 자료구조 스터디 - 10845번 문제*/
#include <iostream>
#include <string>
using namespace std;
#define MAX 10000

class Queue			// 선형 큐
{
	int que[MAX];
	int Quefront;
	int Querear;
	int size;

public:
	Queue()
	{
		Quefront = 0;
		Querear = 0;
		size = 0;
	}

	void push(int x)
	{
		que[Querear++] = x;
		size++;
	}

	int pop()
	{
		if (size == 0)
		{
			return -1;
		}
		else
		{
			size--;
			return que[Quefront++];
		}
	}

	int Getsize()
	{
		return size;
	}

	bool empty()
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

	int front()
	{
		if (size == 0)
		{
			return -1;
		}
		else
		{
			return que[Quefront];
		}
	}

	int back()
	{
		if (size == 0)
		{
			return -1;
		}
		else
		{
			return que[Querear - 1];
		}
	}
};

int main()
{
	int N;		// 명령의 수 N
	string cmd;
	Queue que1;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			int x;
			cin >> x;
			que1.push(x);
		}
		else if (cmd == "pop")
		{
			cout << que1.pop() << endl;
		}
		else if (cmd == "size")
		{
			cout << que1.Getsize() << endl;
		}
		else if (cmd == "empty")
		{
			cout << que1.empty() << endl;
		}
		else if (cmd == "front")
		{
			cout << que1.front() << endl;
		}
		else if (cmd == "back")
		{
			cout << que1.back() << endl;
		}
	}

	return 0;
}