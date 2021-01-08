#include <iostream>
#include <string>
using namespace std;

/*
1. 단어 입력 받기
2. pi, ka, chu를 찾고 해당 인덱스는 t로 대체
3. 더 이상 대체되지 않으면 break;
4. s가 모두 t이면 yes, 아니면 no 출력
*/

int main(){
	string s, ans="YES";

	cin >> s;

	while(1){
		int pi=s.find("pi"), ka=s.find("ka"), chu=s.find("chu");
		
		if(pi!=string::npos) s.replace(pi, 2, "tt");
		else if(ka!=string::npos) s.replace(ka, 2, "tt");
		else if(chu!=string::npos) s.replace(chu, 3, "tt");
		else break;
	}

	for(int i=0; i<s.size(); i++){
		if(s[i]!='t') ans = "NO";
	}

	cout << ans;

	return 0;
}
