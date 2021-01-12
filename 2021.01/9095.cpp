#include <iostream>
using namespace std;

/*
1. TC 입력받고 TC만큼 프로그램 반복
2. 정수 i일 때 경우의 수 = i-1에서 1을 더한 경우의 수,
	i-2에서 2를 더한 경우의 수, i-3에서 3을 더한 경우의 수
3. dp로 구현
4. N 입력받고 dp[N] 출력
*/

int main(){
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	
	int TC, N, dp[11]={0,1,2,4,0,};

	for(int i=4; i<=10; i++){
		dp[i] = dp[i-3]+dp[i-2]+dp[i-1];
	}

	cin >> TC;	
	while(TC--){
		cin >> N;
		cout << dp[N] << '\n';
	}

	return 0;
}
