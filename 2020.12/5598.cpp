#include <iostream>
using namespace std;

/*
1. 암호화된 단어 입력 받기
2. 단어 인덱스별로 -3을 더해 복호화 
3. 복호화된 단어 출력하기
*/

int main(){
	string encoded, decoded;

	cin >> encoded;
	decoded.resize(encoded.size());

	for(int i=0; i<encoded.size(); i++){
		decoded[i] = 65+(encoded[i]+23-65)%26;
	}

	cout << decoded << '\n';

	return 0;
}

// 음수의 나머지 연산 -> 음수
