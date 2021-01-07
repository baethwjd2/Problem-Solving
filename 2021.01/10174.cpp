#include <iostream>
#include <cctype>
#include <string>
using namespace std;

/*
1. TC 수 입력받고 그만큼 프로그램 반복
2. 한 줄 입력받고 알파벳은 소문자로 변환
3. 0~len/2까지 대칭 검사, 아니라면 break
4. 펠린드롬이 맞다면 yes, 아니면 no 출력
*/

int main(){
	int TC;
	string line;

	cin >> TC;
	cin.ignore();

	while(TC--){
		bool palindrome=true;

		getline(cin, line);
		
		for(int i=0; i<line.length()/2; i++){
			line[i] = tolower(line[i]);
			line[line.length()-i-1] = tolower(line[line.length()-i-1]);
			if(line[i]!=line[line.length()-i-1]){
				palindrome = false;
				break;
			}
		}

		if(palindrome) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}
