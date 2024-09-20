class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int face =1;
        int big = height[0];
        for (int i =1 ; i<height.size();i++){
            if (height[i]>big){face++;}
            big=max(big,height[i]);
        }
        return face;
    }
};
