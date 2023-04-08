#include<stdio.h>
int main(){
    int n;
    printf("enter the size of matrix : ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the array :\n ");
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
    }
    printf("the array entered is : \n");
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i][i];       
    }
    printf("sum of left diagonal is %d\n",sum); 
    sum=0;
    int j=n-1;
    for(int i=0;i<n;i++){
        sum+=a[i][j--];
    }
    printf("the sum of right diagonal is %d",sum);


    return 0;
}