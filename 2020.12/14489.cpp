#include <iostream>
using namespace std;

/*
1. 통장 잔고를 입력 받고 누적하기
2. 치킨 값 입력 받기
3-1. 누적값>=치킨*2이라면 누적값-치킨*2 출력
3-2. 그렇지 않다면 누적값 출력
*/

int main(){
	int input, balance=0, chicken;

	for(int i=0; i<2; i++){
		cin >> input;
		balance += input;
	}
	cin >> chicken;

	if(balance>=chicken*2) balance -= chicken*2;
	
	cout << balance;
}
