#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, temp;
    int ans=0;
    int height = 0;
    vector<int> v;
    vector<int> h;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<n;i++){
        if(i!=0){
            if(v[i-1]<v[i]){
                height=height+(v[i]-v[i-1]);
            }
            else{
                h.push_back(height);
                height=0;
            }
        }
    }

    h.push_back(height);

    for(int i=0;i<h.size();i++){
        if(ans<h[i]){
            ans=h[i];
        }
    }

    cout<<ans<<"\n";

    return 0;
}
