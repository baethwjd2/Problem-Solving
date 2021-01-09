#include <iostream>
using namespace std;

/*
1. 상금 입력 받기
2. 1번 경우 출력
3. 2번 경우 출력
*/

int main(){
	int prize;

	cin >> prize;
	cout << prize/100*78 << " " << prize/1000*956;

	return 0;
}
