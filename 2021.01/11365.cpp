#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/*
1. END가 주어질 때까지 프로그램 반복
2. 한 줄 입력 받기
3. reverse 함수 사용한 후 출력
*/

int main(){
	string line;

	while(1){
		getline(cin, line);
		if(line=="END") return 0;

		reverse(line.begin(), line.end());
		cout << line << '\n';
	}
}
