#include<stdio.h>
int main(){
int i,T,N,M;
scanf("%d",&T);

for(i=0;i<T;i++){
scanf("%d %d",&N,&M);
if(M%N==0){
printf("Yes\n");
}
else{
printf("No\n");
}
}


return 0;
}
