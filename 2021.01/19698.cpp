#include <iostream>
#include <algorithm>
using namespace std;

/*
1. N, W, H, L 입력받기
2. min((W/L)*(H/L), N) 출력하기
*/

int main(){
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);

	int N, W, H, L;

	cin >> N >> W >> H >> L;
	cout << min((int)(W/L)*(int)(H/L), N);

	return 0;
}
