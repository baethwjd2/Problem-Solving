#include <iostream>
using namespace std;

/*
1. A, B, C 입력 받기
2. 분할정복 알고리즘 사용해 함수 작성(B가 홀수일 때, 짝수일 때로 구분)
3. 정답 출력
*/

long long DnC(int a, int b, int c){
	if(b==1) return a%c;
	else{
		long long k = DnC(a, b/2, c)%c;
		if(b%2==0) return (k*k)%c;
		else return (((k*k)%c)*a)%c;
	}
}

int main(){
	int A, B, C;

	cin >> A >> B >> C;
	cout << DnC(A, B, C);
	
	return 0;
}
