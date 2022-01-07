#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> arr;
        for(int i=0;i<s.length();i++){
            string temp;
            for(int j=0;j<numRows;j++){
                temp.push_back(' ');
            }
            temp[i%(numRows)]=s[i];
            arr.push_back(temp);
        }
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<numRows;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        } 
    }
};

int main(){
    Solution s;
    string a = s.convert("HelloWorld",4);                                                       
    cout<<a;

    return 0;
}