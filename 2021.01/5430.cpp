#include <iostream>
#include <deque>
using namespace std;

/*
1. TC 입력받고 TC만큼 프로그램 반복
2. string으로 함수 입력받기
3. 배열 수와 배열 deque로 입력받기
4. R: dir++
5. D: dir이 짝수면 pop_front(), dir이 홀수면 pop_back()
6. dir이 짝수면 앞에서부터 출력, 아니면 뒤에서부터 출력
*/

int main(){
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

	int TC, N, input; char junk; string func;

	cin >> TC;
	while(TC--){
		int dir=0, err=0, k;
		deque<int> dq;

		cin >> func >> N;
		for(int i=0; i<N; i++){
			cin >> junk >> input;
			dq.push_back(input);
		} cin >> junk; if(!N) cin >> junk;

		for(int i=0; i<func.size(); i++){
			if(func[i]=='R') dir++;
			else if(func[i]=='D'){
				if(dq.empty()){
					cout << "error\n";
					err=1;
					break;
				} else{
					if(dir%2==0) dq.pop_front();
					else dq.pop_back();
				}
			}
		}

		if(err) continue;
		k = dq.size();
		cout << "[";
		while(k--){
			if(dir%2==0){
				if(k){
					cout << dq.front() << ",";
					dq.pop_front();
				} else cout << dq.front();
			} else{
				if(k){
					cout << dq.back() << ",";
					dq.pop_back();
				} else cout << dq.back();
			}
		} cout << "]\n";
	}

	return 0;
}
