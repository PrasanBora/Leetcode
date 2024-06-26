class Solution {
public:
    int compareVersion(string v1, string v2) 
    {
        int i=0,j=0,v1l =v1.size(),v2l=v2.size() ,n1,n2;
        while(i<v1l || j<v2l )
        {
           n1 =0;
           n2 =0;
           while( i<v1l && v1[i]!='.')
            n1=n1*10 + (v1[i++] -'0');
           while( j<v2l && v2[j]!='.')
            n2=n2*10 + (v2[j++] -'0'); 

           if(n1<n2)
            return -1;
           else if( n1> n2)
            return 1;

            i++;
            j++;   
        }
        return 0;
    }
};