class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                                    {'C', 100},{'D', 500}, {'M', 1000}};
        int num = 0; 
        int i ;
      for( i = 0; i < s.length() - 1 ; )
      {
        if(s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X') ||
           s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C') ||
           s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')  )
        {
            num += m[s[i+1]] - m[s[i]];
            i = i + 2 ;
        }
        else
        {
            num += m[s[i]];
            i++ ;
        }
      }
      if( i < s.length() )
        num += m[s[i]];
       return num;
    }
   
};