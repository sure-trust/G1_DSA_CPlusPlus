//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int length = str.length();
        string reverse;
        for(int i = length-1; i>=0 ;i--){
            reverse += str[i];
        }
        return reverse;
    }
};

