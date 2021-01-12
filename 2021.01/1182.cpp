#include <iostream>
using namespace std;

/*
1. N과 S 입력받기
2. dfs로 부분 수열이 1~N개일 때 원소를 합한 경우의 수 탐색
3. 탐색 완료 시 원소의 합이 S와 같은지 확인
4. ans 출력
*/

int N, S, ans=0, seq[20];

void dfs(int n, int finish, int index, int sum){
	if(n==finish){
		if(sum==S) ans++;
	} else{
		for(int i=index+1; i<N; i++){
			dfs(n+1, finish, i, sum+seq[i]);
		}
	}
}

int main(){
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

	cin >> N >> S;
	for(int i=0; i<N; i++) cin >> seq[i];

	for(int i=1; i<=N; i++){
		dfs(0, i, -1, 0);
	}

	cout << ans;

	return 0;
}
