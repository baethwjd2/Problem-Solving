#include <iostream>
using namespace std;

/*
1. 버섯의 점수 입력 받기
2. 더할 때 마다 체크
	2-1. 더하기 전이 100보다 가까운가? -> break;
	2-2. 더한 게 100보다 가깝다 -> 계속 loop
*/

int main(){
	int input, mushroom[10], score=0;

	for(int i=0; i<10; i++){
		cin >> input;
		mushroom[i] = input;
	}

	for(int i=0; i<10; i++){
		if(abs(score-100) >= abs(score+mushroom[i]-100)){
			score += mushroom[i];
		}else{
			break;
		}
	}

	cout << score;
	
	return 0;
}

// 조건문에서 equal이 성립될 때를 고려하지 않아 틀림
