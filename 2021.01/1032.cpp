#include <iostream>
using namespace std;

/*
1. 파일 개수 입력받기
2. 파일명 입력받기
3. 첫 번째 입력은 ans에 저장
4. 다음 입력부터 ans와 다를 때마다 ans에 ? 표시
5. ans 출력
*/

int main(){
	int N;
	string file, ans;

	cin >> N;

	for(int i=0; i<N; i++){
		cin >> file;
		if(i==0) ans = file;
		else{
			for(int j=0; j<ans.length(); j++){
				if(ans[j]!=file[j]) ans[j] = '?';
			}
		}
	}

	cout << ans;

	return 0;
}
