#include <iostream>
#include <set>
using namespace std;

/*
1. N 입력받기
2. 숫자는 set으로 입력받기
3. min, max 구하기
4. min~max까지 set에 있으면 출력
*/

int main(){
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, input, min=100001, max=-1;
	set<int> num;

	cin >> N;

	while(N--){
		cin >> input; num.insert(input);
		if(input>max) max = input;
		if(input<min) min = input;
	}

	for(int i=min; i<=max; i++)
		if(num.find(i)!=num.end()) cout << i << " ";

	return 0;
}
