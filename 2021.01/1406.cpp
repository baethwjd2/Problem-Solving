#include <iostream>
#include <list>
using namespace std;

/*
1. 문자열 리스트에 담기
2. 커서는 list의 iter로 구현
3. N 입력받고 N만큼 프로그램 반복
*/

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	char input;
	string s, order;
	list<char> lt;

	cin >> s;
	for(int i=0;i<s.size();i++) lt.push_back(s[i]);
	list<char>::iterator iter=lt.end(), it;
	
	cin >> N;

	while(N--){
		cin >> order;

		if(order=="L" && iter!=lt.begin()) iter--;
		else if(order=="D" && iter!=lt.end()) iter++;
		else if(order=="B" && iter!=lt.begin()){
			iter--;
			iter = lt.erase(iter);
		}
		else if(order=="P"){
			cin >> input; lt.insert(iter, input);
		}
	}

	for(iter=lt.begin(); iter!=lt.end(); iter++){
		cout << *iter;
	}

	return 0;
}
