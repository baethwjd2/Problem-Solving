#include <iostream>
using namespace std;

/*
1. TC 입력 받고 TC만큼 프로그램 반복
2. 학생의 수 입력 받기
3. rest에 학생이 가져온 사탕%N 더하고 다시 %N
4. rest가 0이면 yes, 아니면 no 출력
*/

int main(){
	int TC;

	cin >> TC;

	while(TC--){
		int N, rest=0;
		unsigned long long candy;

		cin >> N;

		for(int i=0; i<N; i++){
			cin >> candy;
			rest += candy%N;
			rest %= N;
		}

		if(rest == 0) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
