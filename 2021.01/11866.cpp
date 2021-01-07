#include <iostream>
#include <vector>
using namespace std;

/*
1. N과 K 입력 받기
2. N 크기의 벡터 생성(제거된 사람 값 0, 그 외는 1)
3. ans.size()==N-1일 때까지 반복
4. 1이라면 turn++, turn==K일 때 제거
5. 반복이 끝나면 ans 출력
*/

int main(){
	int N, K, index=0, turn=0;
	vector<int> circle, ans;

	cin >> N >> K;
	circle.resize(N, 1);

	while(ans.size()!=N-1){
		if(circle[index]==1) turn++;
		if(turn==K){
			turn = 0;
			ans.push_back(index+1);
			circle[index] = 0;
		}
		index = (index+1)%N;
	}

	cout << '<';
	for(int i=0; i<ans.size(); i++){
		cout << ans[i] << ", ";
	}
	for(int i=0; i<circle.size(); i++){
		if(circle[i]==1) cout << i+1 << ">\n";
	}
	
	return 0;
}
