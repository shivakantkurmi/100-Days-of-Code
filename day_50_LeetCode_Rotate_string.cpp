class Solution {
public:
    bool rotateString(string& s, string& goal) {
       if (s.size()!=goal.size()) return false;  //check if length is not equal then string cannot acheiving by rotating 
       if ((s+s).find(goal)!=-1) return true;   // if we concate s+s then it must contan goal at least once as goal can be formed after rotating and s+s contains a rotation of s 
                                                // for example s=baacsa and goal =acsaba then s+s =ba'acsaba'acsa so it return true;
       return false;
    }
};
