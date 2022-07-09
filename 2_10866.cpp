/* 자료구조 2주차 문제 - 10866번 문제 */
#include <iostream>
using namespace std;
#define MAX 10001

class Deque
{
	int deque[MAX];
	int front;
	int rear;
	int size;

public:
	Deque()
	{
		size = 0;
		front = 0;
		rear = 0;
	}

	void push_front(int x)
	{
		if (IsEmpty() == 1)
		{
			deque[front] = x;
			size++;
		}
		else
		{
			if (front == 0)
			{
				for (int i = rear; i >= front; i--)		// 맨 앞에 x를 삽입하기 위해 한 칸씩 뒤로 옮겨줌
				{
					deque[i + 1] = deque[i];
				}
				deque[front] = x;
				size++;
				rear++;
			}
			else
			{
				deque[--front] = x;
				size++;
			}
		}
	}

	void push_back(int x)
	{
		if (IsEmpty() == 1)
		{
			deque[rear] = x;
			size++;
		}
		else
		{
			deque[++rear] = x;
			size++;
		}

	}

	void pop_front()
	{
		if (IsEmpty() == 1)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << deque[front++] << endl;
			size--;
			if (size == 0)		// 덱이 비면 덱 초기화
			{
				front = 0;
				rear = 0;
			}
		}
	}

	void pop_back()
	{
		if (IsEmpty() == 1)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << deque[rear--] << endl;
			size--;
			if (size == 0)
			{
				front = 0;
				rear = 0;
			}
		}
	}

	int Size()
	{
		return size;
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

	void Front()
	{
		if (IsEmpty() == 1)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << deque[front] << endl;
		}
	}

	void Back()
	{
		if (IsEmpty() == 1)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << deque[rear] << endl;
		}
	}
	
};

int main()
{
	int num;		// 명령의 수 T
	cin >> num;
	string cmd;
	Deque deq;
	int x;

	for (int j = 0; j < num; j++)
	{
		cin >> cmd;
		if (cmd == "push_front")
		{
			cin >> x;
			deq.push_front(x);
		}
		else if (cmd == "push_back")
		{
			cin >> x;
			deq.push_back(x);
		}
		else if (cmd == "pop_front")
		{
			deq.pop_front();
		}
		else if (cmd == "pop_back")
		{
			deq.pop_back();
		}
		else if (cmd == "size")
		{
			cout << deq.Size() << endl;
		}
		else if (cmd == "empty")
		{
			cout << deq.IsEmpty() << endl;
		}
		else if (cmd == "front")
		{
			deq.Front();
		}
		else if (cmd == "back")
		{
			deq.Back();
		}
	}

	return 0;
}