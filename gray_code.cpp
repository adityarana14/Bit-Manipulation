class Solution
{
    public:
    vector<string> graycode(int n)
    {
        //code here
        if( n == 1)
        {
            vector<string> ans;
            ans.push_back("0");
            ans.push_back("1");
            return ans;
        }
        
        vector<string> weGot;
        weGot=graycode(n-1);
        vector<string> whatWeMade;
        for(int i=0;i<weGot.size();i++)
        {
            whatWeMade.push_back("0"+weGot[i]);
        }
        for(int i=weGot.size()-1;i>=0;i--)
        {
            whatWeMade.push_back("1"+weGot[i]);
        }
        return whatWeMade;
    }
};