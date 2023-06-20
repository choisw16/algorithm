#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int coinNum, money;
    int ans=0;
    cin>>coinNum>>money;
    for(int i=0;i<coinNum;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    while(!v.empty()) {
        ans = ans + (money / v.back());
        money = money % v.back();
        v.pop_back();
    }
    cout<<ans<<"\n";

    return 0;
}
