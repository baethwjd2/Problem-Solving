#include <iostream>
using namespace std;

/*
1. 행렬 크기와 행렬 2개 입력 받기
2. ai==1&&bi==1이면 정답에 1을 더하고 break 
3. 정답 출력
*/

int N, ans=0, matrix1[300][300], matrix2[300][300];

void input_matrix(int (*arr)[300]){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin >> arr[i][j];
		}
	}
}

int main(){
	cin >> N;

	input_matrix(matrix1);
	input_matrix(matrix2);
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++){
				if(matrix1[i][k]==1&&matrix2[k][j]==1){
					ans++;
					break;
				}
			}
		}
	}

	cout << ans;

	return 0;
}
