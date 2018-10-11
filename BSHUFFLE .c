#include<stdio.h>

int main(){
	int t,arr[18];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		arr[i]=i+1;
	}
	if(t==1){
		printf("1\n1\n");
	}
	else /*if(t%2==0 && t>0)*/{	
		for(int i=1;i<t/2;i++){
			printf("%d ",arr[i]);
		}
		printf("%d ",arr[0]);
	
		for(int i=(t/2)+1;i<t;i++){
			printf("%d ",arr[i]);
		}	
		printf("%d\n",arr[t/2]);
		printf("%d ",arr[t-1]);
		for(int i=0;i<t-1;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
	}

return 0;
}
