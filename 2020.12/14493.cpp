#include <iostream>
using namespace std;

/*
1. 구간과 학인봇의 활동 정보 입력 받기
2. 경과 시간(sec)에 대해 구간마다 기다려야 하는 시간을 구하는 수식을 세우기
3. 구간 수 만큼 loop(입력 받을 때마다 sec에 누적)
4. sec 출력
*/

int main(){
	int sec=0, part, active[50000], rest[50000];

	cin >> part;
	for(int i=0; i<part; i++){
		cin >> rest[i] >> active[i];
		
		int k=sec%(active[i]+rest[i]);
		if(k<active[i]) sec += active[i]-k;
		sec++;
	}

	cout << sec;

	return 0;
}
