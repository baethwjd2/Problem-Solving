#include <iostream>
using namespace std;

/*
1. N과 M 입력 받기
2. N>M이면 N-M, 아니면 M-N 출력
*/

int main(){
	long long N, M;
	
	cin >> N >> M;

	if(N>M) cout << N-M;
	else cout << M-N;
	
	return 0;
}
