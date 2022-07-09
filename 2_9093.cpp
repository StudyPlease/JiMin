/* 2주차 자료구조 스터디 - 9093번 문제 */
// 방법 1) C++ <algorithm> reverse 함수를 사용하지 않고
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void reverseWord(string str, char* strpiece_reverse);

int main()
{
	int num;						// 테스트 케이스 개수 T 
	cin >> num;
	cin.ignore();					// 버퍼 무시
	string str, str_piece;
	char* strpiece_reverse;			// 문자 배열 동적할당할 포인터

	for (int i = 0; i < num; i++)
	{
		getline(cin, str);			// 문장 하나 입력받음

		while (str.find(" ") != string::npos)
		{
			str_piece = str.substr(0, str.find(" "));					// 공백을 기준으로 단어를 분리
			strpiece_reverse = new char[str_piece.length() + 1];				// 단어의 길이만큼 문자 배열 동적할당, 단어 길이 측정 - str.length()나 str.size() 함수 사용
			reverseWord(str_piece, strpiece_reverse);

			cout << " ";

			str = str.substr(str.find(" ") + 1);						// 입력받은 문장에서 잘라낸 단어만큼 제외시킴
		}

		strpiece_reverse = new char[str.length() + 1];
		reverseWord(str, strpiece_reverse);								// 문자열에 더 이상 공백이 없어서 while문을 빠져나온 것이므로 마지막으로 뒤집을 단어 하나가 남아있음
		cout << endl;

	}

	return 0;
}

void reverseWord(string str, char* strpiece_reverse)
{
	strcpy(strpiece_reverse, str.c_str());								// 문자 배열에 문자열 복사 - strcpy(str1,str2) : str1에 str2 복사 , c_str() : 문자열을 문자로 변환

	for (int j = str.length() - 1; j >= 0; j--)								// 문자 배열 거꾸로 출력
	{
		cout << strpiece_reverse[j];
	}

}

// 방법 2) C++ <algorithm> reverse 함수를 사용해서
/*
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int num;						// 테스트 케이스 개수 T 
	cin >> num;
	cin.ignore();					// 버퍼 무시
	string str, str_piece;

	for (int i = 0; i < num; i++)
	{
		getline(cin, str);			// 문장 하나 입력받음

		while (str.find(" ") != string::npos)
		{
			str_piece = str.substr(0, str.find(" "));					// 공백을 기준으로 단어를 분리
			reverse(str_piece.begin(), str_piece.end());				// 문자열을 뒤집는 함수 reverse : 헤더파일 algorithm에 저장되어있음. reverse(str.begin(),str.end())의 형식으로 사용
			cout << str_piece;

			cout << " ";

			str = str.substr(str.find(" ") + 1);						// 입력받은 문장에서 잘라낸 단어만큼 제외시킴
		}

		reverse(str.begin(), str.end());								// 문자열에 더 이상 공백이 없어서 while문을 빠져나온 것이므로 마지막으로 뒤집을 단어 하나가 남아있음
		cout << str << endl;

	}

	return 0;
}

*/