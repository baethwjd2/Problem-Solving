#include <iostream>
#include <algorithm>
using namespace std;

/*
1. 왼손, 오른손으로 칠 수 있는 알파벳 정의, 알파벳 위치 정의
2. 처음 위치와 문자열 입력 받기
3. 문자가 어느 방향 손인지 찾고 거리 계산 후 정답에 더하기
4. 문자열 길이만큼 다시 더해서 정답 출력
*/

int main(){
	const int left[]={'q','w','e','r','t','a','s','d','f','g','z','x','c','v'},
		map[][2]={{2,1},{3,5},{3,3},{2,3},{1,3},{2,4},{2,5},{2,6},{1,8},{2,7},{2,8},{2,9},{3,7},{3,6},{1,9},{1,10},{1,1},{1,4},{2,2},{1,5},{1,7},{3,4},{1,2},{3,2},{1,6},{3,1}};
	int pointed[2][2], ans=0;
	char input;
	string s;
	for(int i=0; i<2; i++){
		cin >> input;
		pointed[i][0] = map[input-'a'][0];
		pointed[i][1] = map[input-'a'][1];
	}
	cin >> s;

	for(int i=0; i<s.length(); i++){
		int hand=0;
		if(find(left, left+14, s[i])==left+14) hand = 1;
		ans += abs(pointed[hand][0]-map[s[i]-'a'][0])+abs(pointed[hand][1]-map[s[i]-'a'][1]);
		pointed[hand][0] = map[s[i]-'a'][0];
		pointed[hand][1] = map[s[i]-'a'][1];
	}

	cout << ans+s.length();

	return 0;
}
