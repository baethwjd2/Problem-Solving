#include <iostream>
using namespace std;

/*
1. 단어 입력 받기
2. 0~n/2 까지 대칭이 아니라면 false 및 break
3, 팰린드롬이면 true, 아니면 false 출력
*/

int main(){
	string word, ans="true";
	
	cin >> word;

	for(int i=0; i<word.size()/2; i++){
		if(word[i]!=word[word.size()-i-1]){
			ans = "false";
			break;
		}
	}

	cout << ans;

	return 0;
}
