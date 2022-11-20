class Solution {
public:
    int nthUglyNumber(int n) {
        int ugly[n];
        ugly[0]=1;
        int pointer1=0;
        int pointer2=0;
        int pointer3=0;
       
        for(int i=1;i<n;i++)
        {
            
            int twomultiple=ugly[pointer1]*2;
            int threemultiple=ugly[pointer2]*3;
            int fivemultiple=ugly[pointer3]*5;
            ugly[i] = min (twomultiple, min(threemultiple,fivemultiple));
            if (ugly[i]==twomultiple)
            {
                pointer1++;
            }
            if (ugly[i]==threemultiple)
            {
                pointer2++;
            }
             if (ugly[i]==fivemultiple)
            {
                pointer3++;
            }
            
        }
        return ugly[n-1];
        
    }
};
