#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int c[n];
    printf("Enter the array:");
    for (int i=0; i<n; i++){
        scanf("%d",&c[i]);
    }
    int a,b;
    printf("Enter a and b:");
    scanf("%d",&a);
    scanf("%d",&b);
    int d=0;
    for (int i=0;i<n;i++){
        if (c[i]==a){
            for (int j=i;j<n;j++){
                if (c[j]==b){
                    d=d+1;
                    break;
                }
                d=d+1;
            }
            break;
        }
    }
    printf("The distance is:%d",d);
    return 0;
}
