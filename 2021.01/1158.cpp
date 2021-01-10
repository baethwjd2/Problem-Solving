#include <iostream>
#include <queue>
using namespace std;

/*
1. N, K 입력받기
2. 앉아 있는 사람들은 queue로 구현
3. 제거될 사람은 pop, 아닌 사람은 다시 후위로 
*/

int main(){
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K, turn=0;
	queue<int> circle;
	
	cin >> N >> K;
	for(int i=1; i<=N; i++) circle.push(i);

	cout << '<';
	while(circle.size()){
		turn++;
		if(turn%K==0){
			cout << circle.front();
			circle.pop();
			if(circle.size()) cout << ", ";
		} else{
			circle.push(circle.front());
			circle.pop();
		}
	}cout << '>';

	return 0;
}
