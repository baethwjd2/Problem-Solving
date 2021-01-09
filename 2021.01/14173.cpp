#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

/*
1. 직사각형 좌표 입력 받기
2. 가장 긴 가로, 세로 길이 구하기
3. 둘 중 더 긴 길이 구하기
4. 제곱해서 면적 출력
*/

int main(){
	int map[4][2], m, n;

	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			cin >> map[j][i];
		}
	}

	m = max(map[2][0], map[2][1])-min(map[0][0], map[0][1]);
	n = max(map[3][0], map[3][1])-min(map[1][0], map[1][1]);

	cout << (int)pow(max(m, n), 2);

	return 0;
}
