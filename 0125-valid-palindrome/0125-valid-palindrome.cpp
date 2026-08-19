class Solution {
public:
    bool isPalindrome(string s) {
        string s2="";
        for(char ch:s){
            if(isalnum(ch)){
                s2+=tolower(ch);
            }
        }
     
        int i=0;
        int j=s2.size()-1;
        while(i<j){
            if(s2[i]!=s2[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
};