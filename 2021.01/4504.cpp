#include <iostream>
using namespace std;

/*
1. N 입력 받기
2. 수 목록 입력 받기, 0이 입력될 때까지 프로그램 반복
3. %N이 0이면 배수, 아니면 배수가 아님
*/

int main(){
	int N, input;

	cin >> N;

	while(1){
		cin >> input;
		if(input==0) return 0;

		if(input%N==0) cout << input << " is a multiple of " << N << ".\n";
		else cout << input << " is NOT a multiple of " << N << ".\n";
	}
}
