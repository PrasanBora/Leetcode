class Solution {
public:
    int commonFactors(int a, int b) 
    {
      int mx = max( a,b);
        int count=0;
        for(int i=1;i<=mx;i++)
        {
            if( a%i ==0 && b%i ==0)
                count++;
        }
        return count;
    }
};