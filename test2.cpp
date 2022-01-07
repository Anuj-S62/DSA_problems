#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        vector<string> arr;
        int strCount=0;
        int idx=0;
        while(idx<s.length()){
            if(strCount%(numRows-1)==0){
                string temp;
                for(int i=0;i<numRows;i++){
                    temp.push_back(s[idx]);
                    idx++;
                }
                arr.push_back(temp);
                strCount++;
                continue;
            }
            else{
                string temp;
                for(int i=0;i<numRows;i++){
                    temp.push_back(' ');
                }
                temp[numRows-strCount%(numRows-1)-1]=s[idx];
                arr.push_back(temp);
                idx++;
                strCount++;
            }
        }
        strCount--;
        if(arr[arr.size()-1][numRows-1]!=s[s.length()-1]){
        int k=0;
        while(arr[arr.size()-1][k]!=s[s.length()-1]){
            k++;
        }
            k++;
            for(int i=k;i<numRows;i++){
                arr[arr.size()-1][i]=' '; 
            }
        }
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<numRows;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }  
           string res;
            for(int i=0;i<numRows;i++){
                for(int j=0;j<arr.size();j++)
                    if((arr[j][i]>=64 && arr[j][i]<=90) || (arr[j][i]>=97 && arr[j][i]<=122) || (arr[j][i]>=48 && arr[j][i]<=57)){
                        res.push_back(arr[j][i]);
                    }
                }
                cout<<res.length()<<endl;
                cout<<s.length()<<endl;
                sort(res.begin(),res.end());
                sort(s.begin(),s.end());

                if(s==res){
                    cout<<"hello"<<endl;
                }
    return res;
    }
};

int main(){
    Solution s;
    string a = s.convert("7ZkUlRzek8Fpxbx65ZzfveGsVOs5pobT61UqUCOwvnSUG5RqgoXh5ha6pEqAIQFmcPfrcR6oPSk5DUN5NSjiXTAhqk6764NGWtR9L9kKXbTTBAPB1dg",25);                                                       
    cout<<a;

    return 0;
}
