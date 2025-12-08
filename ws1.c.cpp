#include <stdio.h>
int main(){
	int n1,n2,n3,n4,max_val,max_val_second;
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	max_val = (n1 > n2) ? ((n1 > n3) ? ((n1 > n4) ? n1 : n4) : ((n3 > n4) ? n3 : n4)) : ((n2 > n3) ? ((n2 > n4) ? n2 : n4) : ((n3 > n4) ? n3 : n4));
	//printf("%d",max_val);
	(max_val == n1)?(n1 = 0):n1 = n1 + 0;
	(max_val == n2)?(n2 = 0):n1 = n1 + 0;
	(max_val == n3)?(n3 = 0):n1 = n1 + 0;
	(max_val == n4)?(n4 = 0):n1 = n1 + 0;
	max_val_second = (n1 > n2) ? ((n1 > n3) ? ((n1 > n4) ? n1 : n4) : ((n3 > n4) ? n3 : n4)) : ((n2 > n3) ? ((n2 > n4) ? n2 : n4) : ((n3 > n4) ? n3 : n4));
	printf("%d",max_val_second);
	
	//FIND FIRST MAX  FIRST MAX == 0 
	//AFTER FIND SECOND MAX 
	
	return 0;
}
