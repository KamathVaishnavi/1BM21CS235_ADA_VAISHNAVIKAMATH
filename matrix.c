#include<stdio.h>
int m[10][10],r,c,i,j,k,e,a[20][2],l=-1;
void main(){
printf("Enter no of rows of mat \n ");
scanf("%d",&r);

printf("Enter no of cols of mat \n ");
scanf("%d",&c);



for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("Enter %d row %d col element",i,j);
        scanf("%d",&m[i][j]);
    }
}

printf("Initial matrix");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d   ",m[i][j]);
    }
     printf("\n");
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(m[i][j]==0){
            if(l==-1) { l=0;}
            a[l][0]=i;
            a[l][1]=j;
            l++;
        }
    }
}
 l=l-1;
while(l>-1){
   fun(a[l][0],a[l][1]);
   l--;
}
printf("Updated matrix");
 printf("\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d  ",m[i][j]);
    }
     printf("\n");
}

}

void fun(int a,int b){
for(i=0;i<c;i++){
    m[a][i]=0;
}
for(i=0;i<r;i++){
    m[i][b]=0;
}

}
