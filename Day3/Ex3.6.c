#include<stdio.h>
#include<math.h>
int main(){
	int x1, y1, x2, y2, x3, y3;
	int s1, s2, s3;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	s1 = abs(x2 - x1) / abs(y2 - y1);
	s2 = abs(x3 - x2) / abs(y3 - y2);
	s3 = abs(x3 - x1) / abs(y3 - y1);
	if((s1 == s2) && (s1 == s3)){
		printf("Collinear\n");
	}else{
		printf("Not Collinear\n");
	}
	return 0;
		
}
