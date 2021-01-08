#include <iostream>
using namespace std;

/*
1. 0을 받을 때까지 income 입력 반복
2. 1000000<income<=5000000이면 90%, 그것보다 크면 80% income 출력
*/

int main(){
	int income, tax;
	
	while(1){
		cin >> income;
		if(!income) return 0;

		if(income>1000000&&income<=5000000) cout << (int)(income*0.9) << '\n';
		else if(income>5000000) cout << (int)(income*0.8) << '\n';
		else cout << income << '\n';
	}
}
