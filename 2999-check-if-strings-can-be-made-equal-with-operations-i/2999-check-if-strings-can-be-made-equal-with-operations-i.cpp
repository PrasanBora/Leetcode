class Solution {
public:
    bool canBeEqual(string s1, string s2) 
    {
        for( int i =0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i] && i<2)
            {
                if(s1[i]==s2[i+2] && s1[i+2]==s2[i])
                 {
                    swap(s1[i],s1[i+2]);
                 }
                else
                 return false; 
            }
            if(s1[i]!=s2[i] && i>1)
            return false;
        }
        return true;
    }
};