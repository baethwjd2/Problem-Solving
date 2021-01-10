#include <iostream>
using namespace std;

/*
1. N 입력받기
2. N번만큼 A와 B 입력받기
3. A>B이면 score[0]++, A<B이면 score[1]++
4. score 출력
*/

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, A, B, score[2]={0};

	cin >> N;

	while(N--){
		cin >> A >> B;
		if(A>B) score[0]++;
		else if(A<B) score[1]++;
	}

	cout << score[0] << ' ' << score[1];

	return 0;
}
