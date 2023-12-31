
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> factorial(int N){
        // code here
      
    vector<int> result;
    result.push_back(1); // Initialize the result with 1

    for (int i = 2; i <= N; ++i) {

     int carry = 0;

        for (int j = 0; j < result.size(); ++j) {
            int product = result[j] * i + carry;
            result[j] = product % 10;
            carry = product / 10;
        }

        while (carry) {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }

    reverse(result.begin(), result.end()); // The digits are stored in reverse order
    return result;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}

