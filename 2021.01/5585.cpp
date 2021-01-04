#include <iostream>
using namespace std;

/*
1. 금액 입력 받고 1000에서 빼기
2. /(500,100,50,10,5,1) 값만큼 ans에 더하고 money%=charge
3. ans 출력
*/

int main(){
	int money, ans=0;
	const int charge[]={500,100,50,10,5,1};

	cin >> money;
	money = 1000-money;

	for(int i=0; i<6; i++){
		ans += money/charge[i];
		money %= charge[i];
	}

	cout << ans;

	return 0;
}
