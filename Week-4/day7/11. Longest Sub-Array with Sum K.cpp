class Solution
{
public:
    int lenOfLongestSubarr(vector<int>& arr, int k)
    {

        map<long long, int> mp;
        long long currSum = 0;
        int mxLen = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            currSum += arr[i];

            if (currSum == k)
            {
                mxLen = i + 1;
            }

            if (mp.find(currSum - k) != mp.end())
            {
                mxLen = max(mxLen, i - mp[currSum - k]);
            }

            if (mp.find(currSum) == mp.end())
            {
                mp[currSum] = i;
            }
        }

        return mxLen;
    }


};
