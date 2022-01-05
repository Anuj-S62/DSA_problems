#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        vector<string> arr;
        int a=0;
        int b=0;
        while(b<s.length()){
            if(a%(numRows-1)==0){
                string temp;
                for(int i=0;i<numRows;i++){
                    temp.push_back(s[b]);
                    cout<<b<<endl;
                    b++;
                }
                arr.push_back(temp);
                a++;
                continue;
            }
            else{
                string temp;
                for(int i=0;i<numRows;i++){
                    temp.push_back(' ');
                }
                temp[numRows-a%(numRows-1)-1]=s[b];
                arr.push_back(temp);
                cout<<b<<endl;
                b++;
                a++;
            }
        }
        a--;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<numRows;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }  
            // cout<<a<<" "<<b<<endl;
           string res;
            for(int i=0;i<numRows;i++){
                for(int j=0;j<arr.size();j++)
                    if((arr[j][i]>=64 && arr[j][i]<=90) || (arr[j][i]>=97 && arr[j][i]<=122)){
                        res.push_back(arr[j][i]);
                    }
                }
            for(int i=0;i<res.length()-s.length();i++){
                res.pop_back();
            }
            // cout<<res.length()<<endl;
            // cout<<s.length()<<endl;
    return res;
    }
};

int main(){
    Solution s;
    string a = s.convert("PAYPALISHIRING",7);                                                       
    cout<<a;

    return 0;
}
