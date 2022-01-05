// #include<iostream>
// #include<vector>
// using namespace std;

// void disp(vector<int> & vec){
//     for(int i:vec)cout<<i<<" ";
//     cout<<endl;
// }
// void disp(vector<vector<int>>& vec){
//     for (auto i:vec)disp(i);
//     // for (vector<int> i:vec)disp(i);
// }

// int main(){
//     // vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
//     // disp(arr);
//     // cout<<arr.size();
//     // vector<int> vec(3,10);
//     int n=6;
//     int val=3;
//     vector<vector<int>> arr(n,vector<int>(n,val));
//     disp(arr);
//     arr.

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);

// /*
//  * Complete the 'plusMinus' function below.
//  *
//  * The function accepts INTEGER_ARRAY arr as parameter.
//  */

// void plusMinus(vector<int> arr){
//     float pos=0,neg=0,zero=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]>0){
//             pos++;
//             continue;
//         }
//         else if(arr[i]<0){
//             neg++;
//             continue;
//         }
//         zero++;
//     }
//     float f1=pos/arr.size();
//     float f2=neg/arr.size();
//     float f3=zero/arr.size();
//     cout<<f1<<endl;
//     cout<<f2<<endl;
//     cout<<f3<<endl;

// }

// int main()
// {
//     string n_temp;
//     getline(cin, n_temp);

//     int n = stoi(ltrim(rtrim(n_temp)));

//     string arr_temp_temp;
//     getline(cin, arr_temp_temp);

//     vector<string> arr_temp = split(rtrim(arr_temp_temp));

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++) {
//         int arr_item = stoi(arr_temp[i]);

//         arr[i] = arr_item;
//     }

//     plusMinus(arr);

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }

// vector<string> split(const string &str) {
//     vector<string> tokens;

//     string::size_type start = 0;
//     string::size_type end = 0;

//     while ((end = str.find(" ", start)) != string::npos) {
//         tokens.push_back(str.substr(start, end - start));

//         start = end + 1;
//     }

//     tokens.push_back(str.substr(start));

//     return tokens;
// }

// #include<iostream>
// using namespace std;

// void staircase(int n) {
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;i++){
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++){
//             cout<<"#";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     staircase(6);
//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);

// /*
//  * Complete the 'miniMaxSum' function below.
//  *
//  * The function accepts INTEGER_ARRAY arr as parameter.
//  */

// void miniMaxSum(vector<int> arr) {
//     int min=arr[0];
//     int max=arr[0];
//     int sum=0;
//     for(int i=1;i<5;i++){
//         if(min>arr[i]){
//             min=arr[i];
//         }
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     for(int i=0;i<5;i++){
//         sum=sum+arr[i];
//     }
//     cout<<max<<" "<<min<<endl;
//     cout<<sum-max<<" "<<sum-min;

// }

// int main()
// {

//     string arr_temp_temp;
//     getline(cin, arr_temp_temp);

//     vector<string> arr_temp = split(rtrim(arr_temp_temp));

//     vector<int> arr(5);

//     for (int i = 0; i < 5; i++) {
//         int arr_item = stoi(arr_temp[i]);

//         arr[i] = arr_item;
//     }

//     miniMaxSum(arr);

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }

// vector<string> split(const string &str) {
//     vector<string> tokens;

//     string::size_type start = 0;
//     string::size_type end = 0;

//     while ((end = str.find(" ", start)) != string::npos) {
//         tokens.push_back(str.substr(start, end - start));

//         start = end + 1;
//     }

//     tokens.push_back(str.substr(start));

//     return tokens;
// }

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// /*
//  * Complete the 'breakingRecords' function below.
//  *
//  * The function is expected to return an INTEGER_ARRAY.
//  * The function accepts INTEGER_ARRAY scores as parameter.
//  */

// vector<int> breakingRecords(vector<int> scores) {
//           int temp1=scores[0];
//           int max_count=0;
//           int min_count=0;
//           for(int i=1;i<scores.size();i++){
//               if(temp1 < scores[i]){
//                   temp1=scores[i];
//                   max_count++;
//               }
//           }
//           i
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string n_temp;
//     getline(cin, n_temp);

//     int n = stoi(ltrim(rtrim(n_temp)));

//     string scores_temp_temp;
//     getline(cin, scores_temp_temp);

//     vector<string> scores_temp = split(rtrim(scores_temp_temp));

//     vector<int> scores(n);

//     for (int i = 0; i < n; i++) {
//         int scores_item = stoi(scores_temp[i]);

//         scores[i] = scores_item;
//     }

//     vector<int> result = breakingRecords(scores);

//     for (size_t i = 0; i < result.size(); i++) {
//         fout << result[i];

//         if (i != result.size() - 1) {
//             fout << " ";
//         }
//     }

//     fout << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }

// vector<string> split(const string &str) {
//     vector<string> tokens;

//     string::size_type start = 0;
//     string::size_type end = 0;

//     while ((end = str.find(" ", start)) != string::npos) {
//         tokens.push_back(str.substr(start, end - start));

//         start = end + 1;
//     }

//     tokens.push_back(str.substr(start));

//     return tokens;
// }

// int sockMerchant(int n, vector<int> ar){
//     int sum = 0;
//     for (int i = 0; i < n; i++){
//         int a = 1;
//         if (ar[i] != 0){
//             for (int j = i+1; j < n; j++){
//                 if (ar[i] == ar[j]){
//                     ar[j] = 0;
//                     a++;
//                 }
//             }
//         }
//         sum = sum + (a / 2);
//     }
//     return sum;
// }

// int main(){
//     vector<int> v = {10, 20, 20, 10, 10, 30, 50, 10, 20};
//     int a = sockMerchant(9, v);
//     cout << a;

//     return 0;
// }


#include<iostream>
using namespace std;

int findDigits(int n) {
    vector<int> s;
    long long int a=1,i=10;
    while((n/a)!=0){
        s.push_back((n/a)%i);
        a=a*10;
    }
    for(int j=0;j<s.size();j++){
        cout<<s[j]<<endl;
    }
    int count=0;
    for(int j=0;j<s.size();j++){
        if(s[j]==0){
            continue;
        }
        else if(n%s[j]==0){
            count++;
        }
    } 
    return count;
}

int main(){
    cout<<"hello"<<findDigits(1012);

    return 0;
}