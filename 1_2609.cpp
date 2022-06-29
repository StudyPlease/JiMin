/* 1주차 자료구조 쉬운 문제 - 2609번 문제 */
/* 유클리드 호제법을 이용하여 최대공약수를 찾고 이를 활용하여 최소공배수를 구한다  */
#include <iostream>
using namespace std;

int main()
{
	int A, B, remainer, a, b, GCD, LCM;				// remainer: 나머지, GCD: 최대공약수, LCM: 최소공배수
	cin >> A >> B;
	a = A;											// A와 B를 LCM 구할 때 사용해야되기 때문에 GCD를 구할 때는 a와 b에 A, B 값을 복사해 사용	
	b = B;
	while (b != 0)									// 유클리드 호제법 이용
	{
		remainer = a % b;
		a = b;
		b = remainer;
	}

	GCD = a;										// 최대공약수 GCD 찾음

	A = A / GCD;									// 최소공배수 구하기 : 최대공약수 * (A를 최대공약수로 나눈 몫) * (B를 최대공약수로 나눈 몫)
	B = B / GCD;
	
	LCM = A * B * GCD;

	cout << GCD << endl;
	cout << LCM << endl;

	return 0;
}