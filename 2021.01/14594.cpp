#include <iostream>
using namespace std;

/*
1. 방 개수 입력 받기
2. 행동 횟수와 행동 입력 받기
3. 벽 배열의 [x, y)번 값을 0으로, 이때 배열[N]은 무조건 1
4. 1의 개수 세고 출력
*/

int main(){
	int N, M, wall[101]={0}, x, y, ans=0;

	cin >> N >> M;

	while(M--){
		cin >> x >> y;
		for(int i=x; i<y; i++) wall[i]=1;
	}
	wall[N] = 0;

	for(int i=1; i<=N; i++){
		if(wall[i] == 0) ans++;
	}

	cout << ans;

	return 0;
}
