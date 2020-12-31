#include <iostream>
using namespace std;

/*
1. 마을 수 입력 받기
2. 이동비용 입력 받으며 누적시키고 최대 이동비용 찾기
3. 누적값 - 최대 이용비용 출력
*/

int main(){
	int input, town, sum=0, max=0;

	cin >> town;

	for(int i=0; i<town; i++){
		cin >> input;
		
		sum += input;
		if(input>max) max = input;
	}

	cout << sum-max;
}
