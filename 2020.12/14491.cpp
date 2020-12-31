#include <iostream>
#include <algorithm>
using namespace std;

/*
1. 10진수 입력받기
2. 10진수%9를 문자열에 계속 추가(10진수/9가 0이 될 때까지)
3. 문자열 뒤집어 출력
*/

int main(){
	int dec;
	string ans="";

	cin >> dec;

	while(dec/9!=0){
		ans += '0'+dec%9;
		dec /= 9;
	}
	ans += '0'+dec;

	reverse(ans.begin(), ans.end());
	cout << ans;
}
