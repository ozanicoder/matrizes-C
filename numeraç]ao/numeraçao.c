#include <stdio.h>
int main(){
	int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int n1;
	int n2;
	for(n1=0;n1<3;n1++){
		for(n2=0;n2<3;n2++){
			printf("%d", mat[n1][n2]);
		}
		printf("\n");
	}
}