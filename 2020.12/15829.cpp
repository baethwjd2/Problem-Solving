#include <iostream>
#include <math.h>
using namespace std;

/*
1. 문자열 길이와 문자열 입력 받기
2. 해쉬 함수 적용하기
3. 해쉬 값 출력하기
*/

int main(){
	string str;
	int len;
	long long r[50]={1,}, hash=0;

	cin >> len >> str;
	
	for(int i=0; i<len; i++){
		if(i != 0) r[i] = r[i-1]*31%1234567891;
		hash += ((str[i]-'a'+1)*r[i])%1234567891;
	}
	hash %= 1234567891;

	cout << hash;

	return 0;
}

// 중간 연산에서 오버플로우 체크(1234567891*31 등)
// 나머지 연산: (a*b)%m = (a*(b%m))%m = ((a%m)*b)%m
