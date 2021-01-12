#include <iostream>
#include <vector>
using namespace std;

/*
1. 0 입력 받을 때까지 프로그램 반복
2. N과 vector에 번호 입력받기
3. dfs로 로또 번호 고르기 구현
4. 탐색 완료 시 번호 출력
*/

int N;
vector<int> lotto(6), num;

void print_lotto(){
	for(int i=0; i<6; i++) cout << lotto[i] << ' '; cout << '\n';
}

void dfs(int n, int k){
	if(n==6) print_lotto();
	else{
		for(int i=k+1; i<N; i++){
			lotto[n] = num[i];
			dfs(n+1, i);
		}
	}
}

int main(){
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

	while(1){
		cin >> N; if(!N) return 0; num.resize(N);
		for(int i=0; i<N; i++) cin >> num[i];

		dfs(0, -1);
		cout << '\n';
	}
}
