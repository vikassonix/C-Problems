//n=1
//A->C
//
//n=2
//Move a disc from A->B using C
//A->C
//Move a disc from B->C usin A
//
//n=3
//Move 2 discs from A->B using C
//A->C
//Move 2 discs from B->C usin A
//
//n=N
//Move N-1 discs from A->B using C
//A->C
//Move N-1 discs from B->C usin A

#include<stdio.h>
void toh(int n,char a,char b,char c){
    if(n<1)
        return;
    else{
        toh(n-1,a,c,b);
        printf("\n%c->%c",a,c);
        toh(n-1,b,a,c);
    }
}
int main(){
    toh(5,'A','B','C');
return 0;
}
