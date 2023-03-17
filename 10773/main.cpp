#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<int> st;
    int n,input;
    int ans=0;
    cin>>n;
    while(n--){
        cin>>input;
        if(input==0){
            st.pop();
        }
        else{
            st.push(input);
        }
    }

    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }

    cout<<ans<<"\n";

    return 0;
}
