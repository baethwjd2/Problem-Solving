#include <iostream>
using namespace std;

/*
1. TC 입력 받고 TC 수만큼 프로그램 반복
2. 쿠키 수와 날마다 먹는 쿠키 개수 입력 받기
3. 쿠키/먹는 쿠키 개수 + (나머지가 있다면)1 출력
*/

int main(){
	int TC, N, C;

	cin >> TC;

	while(TC--){
		cin >> N >> C;
		if(N%C!=0) cout << N/C+1 << '\n';
		else cout << N/C << '\n';
	}

	return 0;
}
