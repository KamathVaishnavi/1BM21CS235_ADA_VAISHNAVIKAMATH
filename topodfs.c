#include<stdio.h>
void dfs(int);
int a[10][10],n,exp[10],vis[10],k=0;
void main(){
int m,u,v,i,j;
 printf("Enter no. of vertices");
 scanf("%d",&n);

 for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        a[i][j]=0;
    }
  }

   printf("Enter no. of edges");
 scanf("%d",&m);

 for(i=1;i<=m;i++){
 printf("Enter an edge");
 scanf("%d %d",&u,&v);
 a[u][v]=1;
 }

 for(i=1;i<=n;i++){
    vis[i]=0;
  }

  for(i=1;i<=n;i++){
    if(vis[i]==0){
        dfs(i);
    }
  }

printf("TOPOLOIGICAL ORDER \N");
for(i=n-1;i>=0;i--){
 printf("%d  ",exp[i]);
}
getch();
}

void dfs(int v){
int i;
vis[v]=1;

for(i=1;i<=n;i++){
            if(a[v][i]==1&&vis[i]==0){
               dfs(i);
            }

        }
exp[k++]=v;

}
