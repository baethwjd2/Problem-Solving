#include <iostream>
using namespace std;

/*
1. 0 0 0 입력 받을 때까지 프로그램 반복
2. 수열 입력 받기
3. 등차인지 검사, 아니면 등비
4. 다음 항 출력
*/

int main(){
	int seq[3];

	while(1){
		for(int i=0;i<3;i++) cin >> seq[i];
		if(seq[0]==0&&seq[1]==0) return 0;
		
		if(2*seq[1]==seq[2]+seq[0]) cout << "AP " << 2*seq[2]-seq[1] << '\n';
		else cout << "GP " << (int)(seq[2]*seq[2]/seq[1]) << '\n';
	}
}
