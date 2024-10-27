class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = 1,sum=0,rem;
        while(n){
            num*=(n%10);
            sum+=(n%10);
            n/=10;
        }
        return num-sum;
    }
};
