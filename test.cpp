// #include <bits/stdc++.h>

// using namespace std;

// /*
//  * Complete the 'timeConversion' function below.
//  *
//  * The function is expected to return a STRING.
//  * The function accepts STRING s as parameter.
//  */

// string timeConversion(string s) {
//      if(s[8]=='A'){
//          string a=s;
//          a.pop_back();
//          a.pop_back();
//          return a;
//      }
//      else if(s[1]=='2' && s[0]==1){
//          string a=s;
//          a.pop_back();
//          a.pop_back();
//          return a; 
//      }
//      else{
//          string a=s;
//          a.pop_back();
//          a.pop_back();
//          int x,y;
//          x=a[1]-'0';
//          y=a[0]-'0';
//          if(x<8 && y==0){
//              x=x+2;
//              y=y+1;
//          }
//          else if(x>=8 && y==0){
//              x=x-8;
//              y=y+1;
//          }
//          else{
//              y=y+1;
//              x=x+2;
//          }
//          char p = y + '0';
//          char q = x + '0';
//          a[0]=p;
//          a[1]=q;
//         return a;
//      }
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string s;
//     getline(cin, s);

//     string result = timeConversion(s);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<brr.size();j++){
//             if(arr[i]==brr[j]){
//                 brr.erase(brr.begin()+j);
//                 break;
//             }
//         }
//     }
//     sort(brr.begin(),brr.end());
//     return brr;
// }


// int main(){
//     vector<int> arr={203, 204 ,205 ,206, 207, 208, 203, 204, 205, 206};
//     vector<int> brr = {203, 204 ,204, 205, 206, 207 ,205, 208, 203, 206, 205, 206, 204};
//     vector<int> res=missingNumbers(arr,brr);
//     // for(int i=0;i<res.size();i++){
//     //     cout<<res[i]<<" ";
//     // }
//     return 0;
// }



// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include<string>
// using namespace std;


// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string a;
//         cin>>a;
//         vector<char> temp;
//         int n=a.length()/2+1;   
//         for(int j=0;j<a.length();j++){
            
//         }
//         vector<int> is_arr;
//         is_arr.push_back
//     }

    
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        vector<int> arr;
        int a=1;
        for(long long int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                a++;
            }
            else{
                arr.push_back(a);
                a=1;
            }
        }
        arr.push_back(a);
        sort(arr.begin(),arr.end());
        int res=0;
        for(int i=0;i<arr.size()-1;i++){
            res=res+arr[i];
        }
        // return arr[res];
        return res;
    }


int main(){
    // vector<int> a={3,2,3}; 
    // cout<<majorityElement(a);
    string s="hello";
    sort(s.begin(),s.end());
    cout<<s;

    return 0;
}