
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    bool match(char a, char b){
        
        if(a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']'){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(int i=0; i<x.length(); i++){
            
            if(x[i] == '(' || x[i] == '{' || x[i] == '['){
                st.push(x[i]);
            }
            else{
                
                if(st.empty()){
                    return false;
                }
                else{
                    
                    if(match(st.top(),x[i])){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }

};

