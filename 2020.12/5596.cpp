#include <iostream>
using namespace std;

/*
1. 민국, 만세 점수 입력 받으면서 합하기
2. 더 큰 총점 출력
*/

int main(){
	int input, sum[2]={0,};

	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			cin >> input;
			sum[i] += input;
		}
	}
	
	if(sum[0] < sum[1]) sum[0] = sum[1];
	cout << sum[0];

	return 0;
}
