#include <iostream>
#include <deque>
using namespace std;

/*
1. N 입력받고 N번 프로그램 반복
2. 주어진 명령에 따라 덱 기능 구현
*/

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, x;
	string order;
	deque<int> d;

	cin >> N;

	while(N--){
		cin >> order;

		if(order=="push_front"){
			cin >> x; d.push_front(x);
		} else if(order=="push_back"){
			cin >> x; d.push_back(x);
		} else{
			if(order=="pop_front"){
				if(!d.empty()){
					cout << d.front(); d.pop_front();
				} else cout << -1;
			} else if(order=="pop_back"){
				if(!d.empty()){
					cout << d.back(); d.pop_back();
				} else cout << -1;
			} else if(order=="size") cout << d.size();
			else if(order=="empty"){
				if(d.empty()) cout << 1;
				else cout << 0;
			} else if(order=="front"){
				if(!d.empty()) cout << d.front();
				else cout << -1;
			} else if(order=="back"){
				if(!d.empty()) cout << d.back();
				else cout << -1;
			}
			cout << '\n';
		}
	}

	return 0;
}
