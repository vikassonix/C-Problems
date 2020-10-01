//#include<stdio.h>
//main(){
//	int a[]={1,2,3,4,5,6};
//	int l=0,len=6,r=len-1,t;
//	while(l<=r){
//		t=a[r];
//		a[r]=a[l];
//		a[l]=t;
//		l++;
//		r--;
//	}
//	for(t=0;t<6;t++){
//		printf("%d ",a[t]);
//	}
//}

#include<stdio.h>
void rev(int x[],int s,int e){
    int temp;
        if(s>=e)
            return;
        temp=x[s];
        x[s]=x[e];
        x[e]=temp;
        rev(x,++s,--e);
}
int main(){
    int arr[10]={1,2,3,4,5},n=5,i,s=0,e=n-1;
    rev(arr,s,e);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
return 0;
}
