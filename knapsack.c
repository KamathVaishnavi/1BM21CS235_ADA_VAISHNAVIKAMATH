#include<stdio.h>
int n,m,w[10],p[10],v[10][10],i,j,k,x[10];
void knapsack(){
for(i=0;i<=n;i++){
    for(j=0;j<=m;j++){
        if(i==0||j==0)
            v[i][j]=0;
        else if(w[i]>j){
              v[i][j]=v[i-1][j];
        }
        else {
            v[i][j]=(v[i-1][j]>(v[i-1][j-w[i]]+p[i]))?v[i-1][j]:(v[i-1][j-w[i]]+p[i]);
        }
    }
}


}

void objsel(){
printf("\n Optimal soln %d \n ",v[n][m]);
for(i=1;i<=n;i++){
 x[i]=0;
}
i=n;j=m;
while(i!=0 && j!=0){
    if(v[i][j]!=v[i-1][j]){
        x[i]=1;
        j=j-w[i];
    }
    i=i-1;
}
for(i=1;i<=n;i++){
 if(x[i]==1){
    printf("%d is selected",i);
 }
}
}

void main(){
 printf("Enter knapsack capacity");
 scanf("%d",&m);
 printf("Enter no. of items");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
  printf("Enter %d item weight",i);
 scanf("%d",&w[i]);
  printf("Enter %d item profit",i);
 scanf("%d",&p[i]);
 }
 knapsack();
 objsel();
}
