
string firstRepChar(string s)
{
    //code here.
    int n = s.length();
    vector<int> count(26,0);
    
    for(int i=0;i<n;i++){
        int index = s[i]-97;
        count[index]=count[index]+1;
        if(count[index]>1) return string(1,s[i]);
        
    }
    
    return "-1";
}
