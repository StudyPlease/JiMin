/* 자료구조 3주차 스터디 - 6588번 문제 */
/* 2번째 시도 : 성공
   힘들었던 점 : 시간초과가 계속 떠서 힘들었음... 13, 14번째 줄이 해결책이었다

   입력된 수 n보다 작으면서 3 이상의 소수(소수 중 유일한 짝수는 2이기 때문)를 prime이라 하자.
   n - prime 의 값이 소수라면 prime과 n - prime을 출력
   여기서 prime은 3부터 시작해서 값을 증가시킨다.  -> n = a + b를 만족시키는 소수쌍 중에 b - a가 가장 큰 소수쌍을 찾기위해 
   테스트 케이스 범위에 해당하는 소수를 에라토스테네스의 체를 이용하여 미리 판별한다. */
#include <iostream>
#include <cmath>
using namespace std;
#define MAX 1000000

int main()
{
	std::cin.tie(NULL);					// C++의 빠른 입출력을 위해 13, 14번째 줄이 필요하다...
	std::ios::sync_with_stdio(0);

	bool primeArray[MAX + 1] = { false };			// bool 배열 초기화 -> bool 배열의 첫번째 값은 중괄호 속 값으로 초기화되고 나머지는 false로 초기화됨

	primeArray[0] = true;						// 0과 1은 소수가 아님을 표시
	primeArray[1] = true;

	for (int i = 2; i <= sqrt(MAX); i++)				// 에라토스테네스의 체 : 소수를 구한 뒤 범위 내 소수의 배수를 모두 걸러내는 방법
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

		int wrong = 0;					// 골드바흐의 추측에 해당하는 소수쌍이 존재하는지 확인하는 변수
		cin >> num;
		for (int i = 3; i <= num / 2; i+=2)
		{
			if (!primeArray[i] && !primeArray[num - i])			// i와 num-i가 모두 소수인 경우
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

/* 1번째 시도 : 시간초과
   입력된 수 n보다 작으면서 3 이상의 소수(소수 중 유일한 짝수는 2이기 때문)를 prime이라 하자. 
   n - prime 의 값이 소수라면 prime과 n - prime을 출력
   여기서 prime은 3부터 시작해서 값을 증가시킨다.  -> n = a + b를 만족시키는 소수쌍 중에 b - a가 가장 큰 소수쌍을 찾기위해

#include <iostream>
#include <cmath>
using namespace std;
bool IsPrime(int x);

int main()
{
	int num, prime;

	do
	{
		int wrong = 0;							// 골드바흐의 추측에 해당하는 소수쌍이 존재하는지 확인하는 변수
		cin >> num;
		for (prime = 3; prime < num; prime = prime + 2)
		{
			if (IsPrime(prime) == 1)				// prime이 소수라면
			{
				if (IsPrime(num - prime) == 1)			// 입력된 수 - prime도 소수라면
				{
					cout << num << " = " << prime << " + " << num - prime << endl;			// 정해진 양식대로 소수쌍을 출력
					wrong = 1;
					break;						// 반복문 탈출
				}
			}
		}

		if (wrong == 0 && num != 0)						// num이 0이 아니고 골드바흐의 추측에 해당하는 소수쌍이 없는 경우
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
		if (x % j == 0)				// 나누어 떨어진다면
		{
			return false;			// 소수가 아님
		}
	}

	return true;					// 나누어 떨어지는 수가 없다면 소수이다
}

*/