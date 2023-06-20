#include<stdio.h>
#include<conio.h>
int n,e,source,dest,i,j,edge[10][2],ad[100][100],v1,v2,vis[10],cnt=0;
void dfs(int v);
void main(){
printf("Enter no. of vertices");
scanf("%d",&n);

printf("Enter no of edges");
scanf("%d",&e);

printf("Enter no of source ");
scanf("%d",&source);

printf("Enter no of destination");
scanf("%d",&dest);

printf("Enter edge matrix");
for(i=0;i<e;i++){

 printf("Enter %d edge matrix source",(i+1));
 scanf("%d",&edge[i][0]);
 printf("Enter %d edge matrix dest",(i+1));
 scanf("%d",&edge[i][1]);
}

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        ad[i][j]=0;
    }
}

for(i=0;i<e;i++){
v1=edge[i][0];
v2=edge[i][1];
ad[v1][v2]=1;
}

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(ad[i][j]!=1&&(i!=j)){
        ad[i][j]=999;
      }
    }
}

for(i=0;i<n;i++){
    vis[i]=0;
}

dfs(source);

for(i=0;i<n;i++){
  if(vis[i]==0)  {
    cnt=1;
  }
}
if(cnt==1){
    printf("Not connected");
}
else{
     printf("connected");
}
getch();

}

void dfs(int v){
int i;
vis[v]=1;
printf("%d",v);
for(i=0;i<n;i++){
    if(ad[v][i]==1&&vis[i]==0){
        dfs(i);
    }
}

}


