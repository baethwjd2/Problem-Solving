#include <iostream>
#include <algorithm>
using namespace std;

/*
1. TC 입력받고 TC만큼 프로그램 반복
2. string으로 이름 입력받기
3. tolower() 함수로 소문자로 변환 및 출력
*/

int main(){
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

	int TC; string name;

	cin >> TC;
	while(TC--){
		cin >> name;
		for(int i=0; i<name.size(); i++) cout << (char)tolower(name[i]);
		cout << '\n';
	}

	return 0;
}
