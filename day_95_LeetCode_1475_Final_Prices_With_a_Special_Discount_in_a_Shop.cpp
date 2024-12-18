class Solution {
public:
    int newPrice(int i,int key, vector<int>&arr ){
        for(i+=1;i<arr.size();i++){
            if (key>=arr[i]) return key-arr[i];
        }
        return key;
    }
    vector<int> finalPrices(vector<int>& prices) {
        for(int i=0;i<prices.size()-1;i++){
           prices[i]=newPrice(i,prices[i],prices);
        }
        return prices;
    }
};
