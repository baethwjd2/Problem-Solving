#include <iostream>
using namespace std;

/*
1. 입력 받기
2. ans에 더하기
*/

int main(){
	int input, ans=0, irr=5;

	while(irr--){
		cin >> input;
		ans += input;
	}
	
	cout << ans;

	return 0;
}
