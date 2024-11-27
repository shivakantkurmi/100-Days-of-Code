class Solution {
  public:
    int add_digit(int n ){
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int singleDigit(int n) {
        int sum=0;
        while(n/10!=0){
            sum=add_digit(n);
            n=sum;
        }
        return sum;
    }
};
