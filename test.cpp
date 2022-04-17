#include<bits/stdc++.h>
using namespace std;

    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(int i=0;i<tasks.size();i++){
            if(mp.find(tasks[i])!=mp.end()) mp[tasks[i]]++;
            else mp[tasks[i]] = 1;
        }
        unordered_map<int,int> :: iterator itr = mp.begin();
        int count = 0;
        while(itr!=mp.end()){
                if((*itr).second<2  ) return -1;
                else if(((*itr).second)>=3){
                    count += ((*itr).second)/3;   
                    (*itr).second = (*itr).second - 3*(((*itr).second)/3);
                }
                if((*itr).second<=2 && (*itr).second>0){
                    count++;
                    (*itr).second = 0;
                }
                // cout<<count<<endl;
                // cout<<(*itr).first<<" "<<count<<endl;
            itr++;
        }
       return count; 
    }
int main(){
    // vector<int> a = {2,1,-1};
    // cout<<findClosestNumber(a)<<endl;
    // string s = "921";
    // string x;
    // s[0] = (s[0] + s[1] -'0')%10;
    // for(int i=0;i<s.length();i++){

    // }
    // s = digitSum("1234",2);
    // cout<<s<<endl;
    vector<int> arr = {5,5,5,5};
    cout<<minimumRounds(arr)<<endl;

    return 0;
}