class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        stack<int>st;
        for( int i =0;i<s.length();i++)
        {
            if( s[i] == '(')
                st.push(i);
            
            if( s[i] == ')')
            {
                if(st.empty())
                    s[i] = '#';
                else 
                    st.pop();
            }
        }
        while(!st.empty())
        {
            s[st.top()] ='#';
            st.pop();
        }
        
        string ans ="";
        
        for(auto ch : s)
        {
            if(ch!='#')
                ans.push_back(ch);
        }
        return ans;
        
    }
};