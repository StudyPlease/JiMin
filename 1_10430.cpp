/* 1주차 자료구조 매우 쉬운 문제 - 백준 10430번 문제 */
/* 사용한 자료구조 : 배열            
   배열에 세 수를 저장한 뒤 나머지를 계산한다. */	
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