#include <iostream>
using namespace std;

/*
1. 1~20 카드 정보 담은 배열 생성
2. 10번 프로그램 반복
3. 구간 입력 받기
4. 구간 안 배열 순서 바꾸기(양끝 -> 중앙 방향)
5. 배열 출력
*/

int main(){
	int card[21], irr=10, left, right;

	for(int i=0; i<21; i++){
		card[i] = i;
	}

	while(irr--){
		cin >> left >> right;

		for(int i=left; i<=(left+right)/2; i++){
			int tmp=card[i];
			card[i] = card[right-(i-left)];
			card[right-(i-left)] = tmp;
		}
	}

	for(int i=1; i<=20; i++){
		cout << card[i] << ' ';
	}

	return 0;
}
