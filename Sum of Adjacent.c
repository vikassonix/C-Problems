#include<stdio.h>
main(){
	int a[1000],n,i,s;
	
	printf("Enter length of array  : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if((i+1)!=n){
			s=a[i]+a[i+1];
			printf("%d ",s);
		}
	}
	
}
