/* �ڷᱸ�� 3���� ���͵� - 6588�� ���� */
/* 2��° �õ� : ����
   ������� �� : �ð��ʰ��� ��� ���� �������... 13, 14��° ���� �ذ�å�̾���

   �Էµ� �� n���� �����鼭 3 �̻��� �Ҽ�(�Ҽ� �� ������ ¦���� 2�̱� ����)�� prime�̶� ����.
   n - prime �� ���� �Ҽ���� prime�� n - prime�� ���
   ���⼭ prime�� 3���� �����ؼ� ���� ������Ų��.  -> n = a + b�� ������Ű�� �Ҽ��� �߿� b - a�� ���� ū �Ҽ����� ã������ 
   �׽�Ʈ ���̽� ������ �ش��ϴ� �Ҽ��� �����佺�׳׽��� ü�� �̿��Ͽ� �̸� �Ǻ��Ѵ�. */
#include <iostream>
#include <cmath>
using namespace std;
#define MAX 1000000

int main()
{
	std::cin.tie(NULL);					// C++�� ���� ������� ���� 13, 14��° ���� �ʿ��ϴ�...
	std::ios::sync_with_stdio(0);

	bool primeArray[MAX + 1] = { false };			// bool �迭 �ʱ�ȭ -> bool �迭�� ù��° ���� �߰�ȣ �� ������ �ʱ�ȭ�ǰ� �������� false�� �ʱ�ȭ��

	primeArray[0] = true;						// 0�� 1�� �Ҽ��� �ƴ��� ǥ��
	primeArray[1] = true;

	for (int i = 2; i <= sqrt(MAX); i++)				// �����佺�׳׽��� ü : �Ҽ��� ���� �� ���� �� �Ҽ��� ����� ��� �ɷ����� ���
	{
		if (!primeArray[i])
		{
			for (int j = i * 2; j <= MAX; j+=i)
			{
				primeArray[j] = true;
			}
		}
	}

	int num;

	do {

		int wrong = 0;					// �������� ������ �ش��ϴ� �Ҽ����� �����ϴ��� Ȯ���ϴ� ����
		cin >> num;
		for (int i = 3; i <= num / 2; i+=2)
		{
			if (!primeArray[i] && !primeArray[num - i])			// i�� num-i�� ��� �Ҽ��� ���
			{
				cout << num << " = " << i << " + " << num - i << "\n";
				wrong = 1;
				break;
			}
		}
		if (wrong == 0 && num != 0)
		{
			cout << "Goldbach's conjecture is wrong.\n";
		}

	} while (num != 0);

	return 0;
}

/* 1��° �õ� : �ð��ʰ�
   �Էµ� �� n���� �����鼭 3 �̻��� �Ҽ�(�Ҽ� �� ������ ¦���� 2�̱� ����)�� prime�̶� ����. 
   n - prime �� ���� �Ҽ���� prime�� n - prime�� ���
   ���⼭ prime�� 3���� �����ؼ� ���� ������Ų��.  -> n = a + b�� ������Ű�� �Ҽ��� �߿� b - a�� ���� ū �Ҽ����� ã������

#include <iostream>
#include <cmath>
using namespace std;
bool IsPrime(int x);

int main()
{
	int num, prime;

	do
	{
		int wrong = 0;							// �������� ������ �ش��ϴ� �Ҽ����� �����ϴ��� Ȯ���ϴ� ����
		cin >> num;
		for (prime = 3; prime < num; prime = prime + 2)
		{
			if (IsPrime(prime) == 1)				// prime�� �Ҽ����
			{
				if (IsPrime(num - prime) == 1)			// �Էµ� �� - prime�� �Ҽ����
				{
					cout << num << " = " << prime << " + " << num - prime << endl;			// ������ ��Ĵ�� �Ҽ����� ���
					wrong = 1;
					break;						// �ݺ��� Ż��
				}
			}
		}

		if (wrong == 0 && num != 0)						// num�� 0�� �ƴϰ� �������� ������ �ش��ϴ� �Ҽ����� ���� ���
		{
			cout << "Goldbach's conjecture is wrong." << endl;
		}

	} while (num != 0);

	return 0;
}

bool IsPrime(int x)
{
	for (int j = 2; j <= sqrt(x); j++)
	{
		if (x % j == 0)				// ������ �������ٸ�
		{
			return false;			// �Ҽ��� �ƴ�
		}
	}

	return true;					// ������ �������� ���� ���ٸ� �Ҽ��̴�
}

*/