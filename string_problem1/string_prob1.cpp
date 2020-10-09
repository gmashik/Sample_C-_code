#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<char> s1;
    vector<char> s2;
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(i==0 || i%2==0) {
                
                s1.push_back(s[i]);
            }
            else {
            
            s2.push_back(s[i]);
            }
        }
        for(auto it=s1.begin();it!=s1.end();++it) cout<<*it;
        cout<<" ";
        for(auto it=s2.begin();it!=s2.end();++it) cout<<*it;
        cout<<"\n";
        s1.clear();
        s2.clear();
    }
    return 0;
}
