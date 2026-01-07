#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T); getchar();
	
	for(int i=1; i<=T; i++){
		int N,M,Q;
		scanf("%d %d %d", &N, &M, &Q); getchar();
		
		int roomCondition[M];
		
		for(int j=0; j<M; j++){
			roomCondition[j] = 0;
		}
		
		int matrix[N][M];
		
		for(int j=0; j<N; j++){
			for(int k=0; k<M; k++){
				scanf("%d", &matrix[j][k]); getchar();
			}
		}
		
		for(int j = 0; j < Q; j++){
			int whichFriend;
			scanf("%d", &whichFriend); getchar();
			for(int k=0; k < M; k++){
				if(matrix[whichFriend-1][k] == 1){
					if(roomCondition[k] == 0){
						roomCondition[k] = 1;
					}else if(roomCondition[k] == 1){
						roomCondition[k] = 0;
					}
				}
			}
		}
		
		printf("Case #%d:\n",i);
		
		for(int j=0; j<M; j++){
			if(roomCondition[j] == 1){
				printf("YES\n");
			}else if(roomCondition[j] == 0){
				printf("NO\n");
			}
		}
	}
	
	return 0;
}
