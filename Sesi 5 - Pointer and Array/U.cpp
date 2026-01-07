#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	getchar();
	for(int i=1; i<=T; i++){
		int N;
		scanf("%d", &N); getchar();
		int number[N];
		for(int j=0; j<N; j++){
			scanf("%d", &number[j]); getchar();
		}
		int bibi,lili;
		scanf("%d %d", &bibi, &lili); getchar();
		if(number[bibi-1]>number[lili-1]){
			printf("Case #%d : Bibi\n",i);
		}else if(number[bibi-1]<number[lili-1]){
			printf("Case #%d : Lili\n",i);
		}else if(number[bibi-1]==number[lili-1]){
			printf("Case #%d : Draw\n",i);
		}
	}
	
	return 0;
}


