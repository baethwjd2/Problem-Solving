#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
1. 참가자 수 입력 받기
2. 번호, 참가자 점수, 제출 횟수, 업로드 시간 벡터에 입력받기
3. 참가자 점수, 제출 횟수, 업로드 시간 순으로 벡터 정렬
4. 벡터[0][0] 출력
*/

bool compare(vector<int> v1, vector<int> v2){
	if(v1[1]==v2[1]){
		if(v1[2]==v2[2]){
			return v1[3] < v2[3];
		}else return v1[2] < v2[2];
	}else return v1[1] > v2[1];
}

int main(){
	vector<vector<int>> board;
	int N;

	cin >> N;
	board.resize(N);

	for(int i=0; i<N; i++){
		board[i].resize(4);
		board[i][0] = i+1;
		cin >> board[i][1] >> board[i][2] >> board[i][3];
	}

	sort(board.begin(), board.end(), compare);

	cout << board[0][0];

	return 0;
}
