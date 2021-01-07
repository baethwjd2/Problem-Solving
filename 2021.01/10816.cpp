#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
1. 숫자 카드 개수와 숫자 카드 입력 받기
2. M과 구해야 할 숫자 카드 입력 받기
3. 숫자 카드 정렬
4. upper bound 값 - lower bound 값 + 1
5. ans 출력
*/

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	vector<int> card, target, ans;

	cin >> N;
	card.resize(N);
	for(int i=0; i<N; i++){
		cin >> card[i];
	}
	sort(card.begin(), card.end());

	cin >> M;
	target.resize(M);
	ans.resize(M);
	for(int i=0; i<M; i++){
		cin >> target[i];
		ans[i] = upper_bound(card.begin(), card.end(), target[i])-lower_bound(card.begin(), card.end(), target[i]);
	}

	for(int i=0; i<M; i++){
		cout << ans[i] << ' ';
	}

	return 0;
}
