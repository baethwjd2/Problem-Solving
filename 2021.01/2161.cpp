#include <iostream>
#include <queue>
using namespace std;

/*
1. 카드 순서를 queue로 구현
2. N 입력받고 queue 생성 및 값 부여
3. q.pop() -> q.push(q.front()) -> q.pop()
4. 카드를 버릴 때마다 출력
*/

int main(){
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

	int N;
	queue<int> q;

	cin >> N;
	for(int i=1; i<=N; i++) q.push(i);

	while(q.size()>1){
		cout << q.front() << ' '; q.pop();
		q.push(q.front()); q.pop();
	} cout << q.front();

	return 0;
}
