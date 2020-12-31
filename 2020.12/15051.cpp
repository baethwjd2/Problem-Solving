#include <iostream>
#include <algorithm>
using namespace std;

/*
1. 세 층의 직원 수를 입력 받기
2. 각각의 층을 설치했을 때마다의 최소값 구하고 출력
*/

int main(){
	int emp[3];

	cin >> emp[0] >> emp[1] >> emp[2];
	cout << min(min(emp[0]*2+emp[2]*2, emp[0]*4+emp[1]*2), emp[2]*4+emp[1]*2);

	return 0;
}
