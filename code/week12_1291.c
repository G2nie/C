#include <stdio.h>

int main() {
	int s,e;

    // 유효성 검사
	while(1) {
	    scanf("%d %d",&s,&e);

	    if((s<2||s>9) || (e<2||e>9)) {
		    printf("INPUT ERROR!\n");
	    } 
        else {
	        break;
        }
    }

    // 구구단 출력
	if(s>=e) {
		for(int i=1; i<=9; i++) {
			for(int j=s; j>=e; j--) {
				printf("%d * %d = %2d   ", j, i, j*i);
			} printf("\n");
		}
	}

	if(e>s) {
		for(int i=1; i<=9; i++) {
			for(int j=s; j<=e; j++) {
				printf("%d * %d = %2d", j, i, j*i);
			}
		}
	}
    return 0;
}