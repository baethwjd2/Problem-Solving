#include <iostream>
#include <algorithm>
using namespace std;

/*
1. 숫자 문자열로 입력 받기
2. 30의 배수인지 검사 -> 아니라면 -1 출력
3. 맞다면 내림차순으로 정렬하고 출력
*/

bool compare(char c1, char c2){
	return c1 > c2;
}

int main(){
	string N;
	int check_3=0, check_10=0;

	cin >> N;

	for(int i=0; i<N.size(); i++){
		check_3 = (check_3+N[i]-'0')%3;
		if(N[i]=='0'){
			check_10 = 1;
		}
	}
	if(check_3!=0 || check_10!=1){
		cout << -1;
		return 0;
	}

	sort(N.begin(), N.end(), compare);
	cout << N;

	return 0;
}
