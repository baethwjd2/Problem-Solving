#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
1. N과 숫자 카드 벡터에 입력 받기
2. 숫자 카드 정렬하기
3. M과 찾을 카드 벡터에 입력 받기
4. 이진 탐색하고 있으면 1, 없으면 0
*/

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;

	cin >> N; vector<int> card(N);
	for(int i=0; i<N; i++) cin >> card[i];
	sort(card.begin(), card.end());

	cin >> M; vector<int> find(M);
	for(int i=0; i<M; i++) cin >> find[i];

	for(int i=0; i<M; i++) cout << binary_search(card.begin(), card.end(), find[i]) << ' ';

	return 0;
}
