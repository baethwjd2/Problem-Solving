#include <iostream>
#include <string>
using namespace std;

/*
1. 줄의 수 입력받고 그만큼 프로그램 반복
2. 문장 입력받기
3. line[0] = 'A'+line[0]-'a'
4. 출력하기
*/

int main(){
	int N;
	string line;

	cin >> N;
	cin.ignore();

	while(N--){
		getline(cin, line);
		if(line[0]>='a') line[0] = 'A'+line[0]-'a';
		cout << line << '\n';
	}

	return 0;
}

// 입력 버퍼에 남은 개행 문자 주의 -> cin.ignore()로 비울 
