#include<stdio.h>
int main(){
    const int n = 10;
    int a[n] = {1,4,2,6,8,3,5,7,10,9};
    for(int i = 0; i < n - 1; i++){
        int swapped = 0;
        for(int j = 0; j < n-1-i; j ++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = 1;
            }
        }
        if(!swapped){
            break;
        }
    }
    /*Độ phức tạp không gian: O(1);
    Độ phức tạp thời gian
    -Tốt nhất O(n)
    -Xấu nhất O(n^2)
    -Trung bình O(n^2)*/
}
