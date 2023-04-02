#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<3;i++){
        string s, temp;
        stack<string> st;
        getline(cin, s);
        for(int j=0;j<s.length();j++){
            if(s[j]==' '){
                st.push(temp);
                st.push(" ");
                temp.clear();
            }
            else{
                temp+=s[j];
            }
        }
        st.push(temp);
        cout<<"Case #"<<i+1<<": ";
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<"\n";
    }

    return 0;
}
