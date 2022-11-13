class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<long long> ans(200005,0);
        set<int> counter;
        for(int i=0;i<10;i++)
        {
            counter.insert(i);
        }
        long long mod = 1000000007;
        ans[0]=1;
        for(int i= 0; i<100005; i++)
        {
            ans[i+zero]%=mod;
            ans[i+zero]+=ans[i];
            ans[i+one]%=mod;
            ans[i+one]+=ans[i];
        }
        long long temp=0;
        for(int i=low; i<=high;i++)
        {
            temp=(temp+ans[i])%mod;
        }
        return temp;
    }
};
