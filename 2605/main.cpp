#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        v.insert(v.end()-m,i+1);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
