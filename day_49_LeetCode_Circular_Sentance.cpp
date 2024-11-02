class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector <char> last;
        int n= sentence.length();
        if (sentence[0]!=sentence[n-1]) return false;
        if (n==1) return true;
        for (int i =1;i<n-1;i++){
               if (sentence[i]==' '){
                last.push_back(sentence[i-1]);
                last.push_back(sentence[i+1]);
                }
        }
        int j = 0 ;
        while(j<last.size()){
            if (last[j++]!=last[j++]) return 0;
        }
        return 1;
    }
};
