#include <iostream>
using namespace std;

/*
1. N 입력 받기
2. 숫자 정보 담은 배열 생성(투사되면 1, 아니면 0)
3. x~y에 해당하는 숫자 1
4. for문으로 길이 총합 구하고 정답 출력
*/

int main(){
	int N, line[10001]={0,}, x, y, ans=0;

	cin >> N;

	while(N--){
		cin >> x >> y;
		for(int i=x; i<y; i++) line[i] = 1;
	}

	for(int i=1; i<10001; i++){
		if(line[i]) ans++;
	}

	cout << ans;

	return 0;
}
