#include <iostream>
#include <vector>
#include <utility>
#include <math.h>
#include <algorithm>
#include <set>
using namespace std;

/*
1. TC 입력 받고 TC 수만큼 프로그램 반복
2. 점 4개 입력 받고 첫 점에 대한 거리 구하기
3. 네 변 길이가 같은지 조사
4. 한 각이 90도인지 조사
5. 정사각형이면 1, 아니면 0 출력
*/

int calc_d(pair<int, int> p1, pair<int, int> p2){
	return pow(p1.first-p2.first, 2)+pow(p1.second-p2.second, 2);
}

int main(){
	int TC;

	cin >> TC;

	while(TC--){
		int x, y;
		vector<pair<int, int>> point(4);
		set<int> d;

		for(int i=0; i<4; i++){
			cin >> x >> y;
			point[i] = make_pair(x, y);
		}

		sort(point.begin(), point.end());

		d.insert(calc_d(point[0], point[1]));
		d.insert(calc_d(point[0], point[2]));
		d.insert(calc_d(point[1], point[3]));
		d.insert(calc_d(point[2], point[3]));

		if(d.size()==1 &&
			(point[0].first-point[1].first)*(point[2].first-point[0].first)==(-1)*(point[0].second-point[1].second)*(point[2].second-point[0].second)) cout << "1\n";
		else cout << "0\n";
	}

	return 0;
}
