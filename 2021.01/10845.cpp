#include <iostream>
#include <queue>
using namespace std;

/*
1. N 입력받고 N번 프로그램 반복
2. 주어진 명령에 따라 큐 기능 구현
*/

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, x;
	string order;
	queue<int> q;

	cin >> N;

	while(N--){
		cin >> order;

		if(order == "push"){
			cin >> x; q.push(x);
		}else if(order=="pop"){
			if(!q.empty()){
				cout << q.front() << '\n'; q.pop();
			}else cout << -1 << '\n';
		}else if (order=="size") cout << q.size() << '\n';
		else if(order=="empty"){
			if(q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}else if(order=="front"){
			if(q.empty()) cout << -1 << '\n';
			else cout << q.front() << '\n';
		}else if(order=="back"){
			if(q.empty()) cout << -1 << '\n';
			else cout << q.back() << '\n';
		}
	}

	return 0;
}
