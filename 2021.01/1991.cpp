#include <iostream>
#include <algorithm>
using namespace std;

/*
1. 노드 구조체 생성
2. 순회함수 작성
3. 트리를 입력 받고 노드 구조체에 데이터 옮기기
4. 함수 실행
*/

typedef struct node *pointer;
typedef struct node{
	char data;
	pointer left, right;
}node;

int N;
char par[26], child[26][2];
node nodes[26];

void preversal(pointer tp, int order){
	if(tp){
		if(order==0) cout << tp->data;
		preversal(tp->left, order);
		if(order==1) cout << tp->data;
		preversal(tp->right, order);
		if(order==2) cout << tp->data;
	}
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N;
	for(int i=0; i<N; i++){
		cin >> par[i];
		for(int j=0; j<2; j++) cin >> child[i][j];
	}
	
	for(int i=0; i<N; i++){
		nodes[i].data = par[i];
		if(child[i][0]!='.')
			nodes[i].left = &nodes[find(par, par+N, child[i][0])-par];
		else nodes[i].left = NULL;
		if(child[i][1]!='.')
			nodes[i].right = &nodes[find(par, par+N, child[i][1])-par];
		else nodes[i].right = NULL;
	}

	for(int i=0; i<3; i++){
		preversal(&nodes[0], i);
		cout << '\n';
	}

	return 0;
}
