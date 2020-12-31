#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
1. 문자열 입력 받기
2. '/'로 스플릿
3. 조건에 따라 정답 출력
*/

int main(){
	int kda[3], index=0;
	string s, token;

	cin >> s;
	istringstream ss(s);

	while(getline(ss, token, '/')){
		kda[index] = stoi(token);
		index++;
	}
	
	if(kda[0]+kda[2]<kda[1] || kda[1]==0) cout << "hasu";
	else cout << "gosu";

	return 0;
}
