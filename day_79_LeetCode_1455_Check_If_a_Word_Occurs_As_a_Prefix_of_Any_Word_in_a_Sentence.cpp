class Solution {
public:
    int isPrefixOfWord(string& sentence, string& searchWord) {
        string s=" "+sentence, t=" "+searchWord; // so each word index can be equal to space occure before it;
        int m=0;
        if ((m=(s.find(t)))==-1) return -1;   // assign m the valur of normal char index occurance of searchWord 
        return 1+count(s.begin(), s.begin()+m, ' ');   // counting the number of spaces before index m so it can be the 1 based index of m (where searchWord found) 
    }
};
