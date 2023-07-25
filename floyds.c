#include<stdio.h>
int c[10][10],d[10][10],n;
void floyd(){
int i,j,k;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
    d[i][j]=c[i][j];
}

}

for(k=1;k<=n;k++){
 for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
  d[i][j]=(d[i][j]<(d[i][k]+d[k][j]))?d[i][j]:(d[i][k]+d[k][j]);

}

}
}
}

int main(){
int i,j;
printf("Enter no. of vert");
scanf("%d",&n);
printf("Enter matrix");
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++){
      printf("Enter %d row %d col ele \n",i,j);
      scanf("%d",&c[i][j]);

    }

}
floyd();
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++){
      printf("%d \t",d[i][j]);


    }
    printf("\n");

}


}
