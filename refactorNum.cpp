//2022/5/26
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1E6;
using ll = long long;
//输入三个整数x,y,z输出x,y,z中各位数字重新组合可能形成的最大的数
bool cmp(const char &a,const char &b){
    return a>b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ostringstream oss;
    for(int i=0;i<3;i++){
        int n;
        cin>>n;
        oss<<n;
    }
    string s=oss.str();
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
    return 0;
}
