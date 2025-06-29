//Dùng vòng lặp
int sumNumberByLoop (int n) {
    int sum = 0;
    for(int i =1; i <=n; i++){
        sum += i;
    }
    return sum;
    // Độ phức tạp không gian: O(1)
}
//Dùng Cấp số cộng
int sumNumberByGauss (int n) {
    return ((n*(n+1))/2);
    // Độ phức tạp không gian: O(1)
}
