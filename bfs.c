#include<stdio.h>
int a[10][10],vis[10],n;
void bfs(int v) {
    int i;
    int q[10],f=0,r=0,u;
    vis[v]=1;
    q[r]=v;
    while(f<=r){
        u=q[f];
        printf("%d",u);
        for(i=1;i<=n;i++){
            if(a[u][i]==1&&vis[i]==0){
                r=r+1;
                q[r]=i;vis[i]=1;
            }

        }
        f=f+1;
    }
}

void main(){
int i,j;
 printf("Enter no. of vertices");
 scanf("%d",&n);
  printf("Enter adjacency matrix");
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        printf("Enter %d row %d col \n ",i,j);
        scanf("%d",&a[i][j]);
    }
  }

  for(i=1;i<=n;i++){
    vis[i]=0;
  }

  printf("BFS TRAVERSAL");
  for(i=1;i<=n;i++){
    if(vis[i]==0){
        bfs(i);
    }
  }




}




