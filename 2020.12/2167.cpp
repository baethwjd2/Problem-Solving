#include <iostream>
#include <vector>
using namespace std;

/*
1. 배열 크기를 입력 받고 이차원 배열 생성
2. 이차원 배열을 입력 받기
3. TC 수 입력 받기
4. i, j, x, y 입력 받기
5. i~x j~y까지 이중 for문으로 합 구하기
*/

int main(){
	int input, N, M, TC, i, j, x, y;

	cin >> N >> M;
	vector<vector<int>> arr(N);

	for(int k=0; k<N; k++){
		arr[k].resize(M);
		for(int m=0; m<M; m++){
			cin >> arr[k][m];
		}
	}

	cin >> TC;

	while(TC--){
		int sum=0;

		cin >> i >> j >> x >> y;

		for(int k=i-1; k<x; k++){
			for(int m=j-1; m<y; m++){
				sum += arr[k][m];
			}
		}

		cout << sum << '\n'; 
	}

	return 0;
}
