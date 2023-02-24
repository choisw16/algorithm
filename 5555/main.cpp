#include <iostream>
#include <string>

using namespace std;

int main() {
    string answerStr;
    int ringCnt;
    string str[101];
    int answer=0;

    cin >> answerStr;
    cin >> ringCnt;
    for(int i=0;i<ringCnt;i++){
        string input;
        cin>>input;
        str[i]=input+input;
        string cmpStr;
        for(int j=0;j<10;j++) {
            for (int k = 0; k < answerStr.length(); k++) {
                cmpStr += str[i][j+k];
            }
            if (cmpStr == answerStr) {
                answer += 1;
                cmpStr="";
                break;
            }
            cmpStr="";
        }
    }
    cout<<answer<<endl;

    return 0;
}
