#include <iostream>
#include <vector>
using namespace std;

/*
1. N과 M 입력 받기
2. N*4 크기의 벡터 생성
3. N번만큼 문자열 벡터에 입력 받고 정렬
4. 가장 큰 빈도인 염기를 선정해 s 구하고 출력
5. hamming distance 값 출력
*/

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, HD=0;
	string DNA, s="";

	cin >> N >> M;
	vector<vector<int>> count(M, vector<int>(4, 0));

	for(int i=0; i<N; i++){
		cin >> DNA;
		for(int j=0; j<M; j++)
			switch(DNA[j]){
				case 'A': count[j][0]++; break;
				case 'C': count[j][1]++; break;
				case 'G': count[j][2]++; break;
				case 'T': count[j][3]++; break;
			}
	}

	for(int i=0; i<M; i++){
		int sum=0, max=-1, index;
		for(int j=0; j<4; j++){
			sum += count[i][j];
			if(count[i][j]>max){
				max = count[i][j]; index = j;
			}
		}
		HD += sum-count[i][index];
		switch(index){
			case 0: cout << 'A'; break;
			case 1: cout << 'C'; break;
			case 2: cout << 'G'; break;
			case 3: cout << 'T'; break;
		}
	}cout << '\n' << HD;

	return 0;
}
