#include <iostream>
#include <algorithm>
using namespace std;

/*
1. L, 집합 S, n 입력 받기
2. S에 n이 없다면 0 / 그 외 S[0]=n -> S 정렬하기
3. 수직선 상 n의 양쪽 점 2개 찾기
4. (x, n] 좋은 구간 개수 + n을 포함하는 (x, y) 좋은 구간 개수 출력
*/

int main(){
	int L, S[50], n;

	cin >> L;
	for(int i=0; i<L; i++){
		cin >> S[i];
	}
	cin >> n;

	if(find(S, S+L, n)!=S+L) cout << 0 << '\n';
	else{
		sort(S, S+L);
		int left=0, right=S[L-1];

		for(int i=0; i<L; i++){
			if(S[i]>n){
				if(i!=0) left = S[i-1];
				right = S[i];
				break;
			}
		}

		cout << max(n-left-1, 0)+max((n-left), 1)*(right-n-1) << '\n';
	}
	
	return 0;
}
