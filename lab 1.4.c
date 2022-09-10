#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array:");
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is:");
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
