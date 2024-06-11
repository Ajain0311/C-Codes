#include<iostream>
#include<vector>
using namespace std;
string stringSize(string s, int count){
  vector<string> res;
  string str = "";
  for(int i=0;i<s.size(); i+=count){
    string rev = "";
    rev = s.substr(i,count);
    /*int low = 0;              it is for reversing substring
    int high = rev.size() - 1;
    while(low < high){
      swap(rev[low],rev[high]);
      low++;
      high--;
    }*/
    res.push_back(rev);
  }
  for(int i=res.size();i>=0;i--){
    str += res[i];
  }
  return str;
}

int main(){
  string str = "abcdefghijklm";
  int count = 3;
  string newStr = stringSize(str, count);
  cout<<newStr;
}