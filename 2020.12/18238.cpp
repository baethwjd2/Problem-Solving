#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

/*
1. 문자열 입력받기
2. 더 가까운 곳으로 회전시키고 걸리는 시간 누적
3. 누적 시간 출력
*/

int main(){
	int pointed=1, ans=0;
	string s;

	cin >> s;

	for(int i=0; i<s.length(); i++){
		int target=s[i]-'A'+1;
		ans += min(abs(target-pointed), 26-abs(target-pointed));
		pointed = target;
	}

	cout << ans;
}
