#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;

/*
1. TC 수 입력 받고 TC 수만큼 프로그램 반복  
2. 문서 개수와 정답을 출력할 문서의 인덱스 입력 받기
3. 문서 중요도와 순서를 queue로 저장 + 배열로도 저장 및 내림차순 정렬
4. 배열[0]과 같으면 pop 및 ans++, 같지 않으면 재배치
5. pop 할 때 출력할 문서와 같다면 ans 출력 후 프로그램 종료
*/

bool compare(int a, int b){
	return a > b;
}

int main(){
	int TC;

	cin >> TC;

	while(TC--){
		queue<pair<int, int>> docu;
		int ans=0, N, target, input, seq[100];

		cin >> N >> target;

		for(int i=0; i<N; i++){
			cin >> input;
			docu.push(make_pair(input, i));
			seq[i] = input;
		}
		sort(seq, seq+N, compare);

		while(1){
			if(docu.front().first==seq[ans]){
				ans++;
				if(docu.front().second==target){
					cout << ans << '\n';
					break;
				}
				docu.pop();
			}else{
				docu.push(docu.front());
				docu.pop();
			}
		}
	}
}
