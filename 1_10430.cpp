/* 1���� �ڷᱸ�� �ſ� ���� ���� - ���� 10430�� ���� */
/* ����� �ڷᱸ�� : �迭            
   �迭�� �� ���� ������ �� �������� ����Ѵ�. */	
#include <iostream>
using namespace std;

int main()
{
	int num[3];
	cin >> num[0] >> num[1] >> num[2];
	cout << (num[0] + num[1]) % num[2] << endl;
	cout << ((num[0] % num[2]) + (num[1] % num[2])) % num[2] << endl;
	cout << (num[0]*num[1]) % num[2] << endl;
	cout << ((num[0] % num[2]) *(num[1] % num[2])) % num[2] << endl;
	
	return 0;
}