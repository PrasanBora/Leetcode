class Solution {
public:
    string reverseWords(string s) 
    {
        int i=0;
        int j=0;
        for( int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
              reverse(s.begin()+j,s.begin()+i);
              j=i+1;
            }
        }
        reverse(s.begin()+j,s.end());
        return s;
    }

};