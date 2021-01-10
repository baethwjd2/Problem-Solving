#include <iostream>
#include <algorithm>
using namespace std;

/*
1. N과 A, B 입력받기
2. A와 B 정렬
3. A와 B 역순으로 곱한 값 누적
4. 정답 출력
*/

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, A[100], B[100], ans=0;

	cin >> N;

	for(int i=0; i<N; i++) cin >> A[i];
	for(int i=0; i<N; i++) cin >> B[i];

	sort(A, A+N); sort(B, B+N);

	for(int i=0; i<N; i++) ans += A[i]*B[N-1-i];

	cout << ans;

	return 0;
}
