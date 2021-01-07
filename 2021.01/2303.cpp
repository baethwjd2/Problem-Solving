#include <iostream>
using namespace std;

/*
1. 사람 수 입력 받기
2. 점수 입력받고 전체 합 구하기
3. 이중 for문으로 전체 합에서 카드 두 개를 빼 점수 찾기
4. best보다 score가 크면 ans=i 
5. ans 출력
*/

int main(){
	int N, card[1001][5], best=-1, ans;

	cin >> N;

	for(int i=1; i<=N; i++){
		int score=0, max=-1;

		for(int j=0; j<5; j++){
			cin >> card[i][j];
			score += card[i][j];
		}
		
		for(int m=0; m<5; m++){
			for(int n=m+1; n<5; n++){
				int tmp = score;
				tmp = (tmp-card[i][m]-card[i][n])%10;
				if(tmp>max) max = tmp;
			}
		}

		if(max>=best){
			best = max;
			ans = i;
		}
	}

	cout << ans;

	return 0;
}
