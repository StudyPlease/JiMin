/* 1���� �ڷᱸ�� ���� ���� - 2609�� ���� */
/* ��Ŭ���� ȣ������ �̿��Ͽ� �ִ������� ã�� �̸� Ȱ���Ͽ� �ּҰ������ ���Ѵ�  */
#include <iostream>
using namespace std;

int main()
{
	int A, B, remainer, a, b, GCD, LCM;				// remainer: ������, GCD: �ִ�����, LCM: �ּҰ����
	cin >> A >> B;
	a = A;											// A�� B�� LCM ���� �� ����ؾߵǱ� ������ GCD�� ���� ���� a�� b�� A, B ���� ������ ���	
	b = B;
	while (b != 0)									// ��Ŭ���� ȣ���� �̿�
	{
		remainer = a % b;
		a = b;
		b = remainer;
	}

	GCD = a;										// �ִ����� GCD ã��

	A = A / GCD;									// �ּҰ���� ���ϱ� : �ִ����� * (A�� �ִ������� ���� ��) * (B�� �ִ������� ���� ��)
	B = B / GCD;
	
	LCM = A * B * GCD;

	cout << GCD << endl;
	cout << LCM << endl;

	return 0;
}