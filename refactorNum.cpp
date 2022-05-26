//2022/5/26
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1E6;
using ll = long long;
//输入三个整数x,y,z输出x,y,z中各位数字重新组合可能形成的最大的数
bool cmp(const char &a,const char &b){
    return a>b;//修改字符串比较规则，按字典序从大到小排
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ostringstream oss;//创建一个流
    for(int i=0;i<3;i++){
        int n;
        cin>>n;
        oss<<n;//将数字保存到流中
    }
    string s=oss.str();//将数字改成字符串保存到S中
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
    return 0;
}
