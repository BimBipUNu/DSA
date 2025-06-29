#include<stdio.h>
int main(){
    const int n =10;
    int a[n] = {1,2,1,2,3,5,4,2,3,7};
    int find;
    int count = 0;
    printf("Input a number");scanf("%d",&find);

    for(int i=0; i<n ;i++){
        if(a[i]==find){
            count++;
        }
    }
    printf("%d",count);
    return 0;
    //Độ phức tạp thời gian: O(n);
    //Độ phức tạp không gian O(1);
};
