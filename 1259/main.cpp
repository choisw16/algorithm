#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s;

    while(s!="0"){
        cin>>s;
        string rev=s;
        reverse(s.begin(),s.end());
        if(s=="0"){
            break;
        }
        else if(s==rev){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }

    return 0;
}
