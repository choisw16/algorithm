#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    vector<pair<int, int>> list;
    cin>>n;
    for(int i=0;i<n;i++){
        int start, end;
        cin>>start>>end;
        list.push_back(make_pair(end, start));//끝나는 시간을 기준으로 정렬할 것이기 때문에 end가 first로
    }
    sort(list.begin(), list.end());//끝나는 시간을 기준으로 오름차순 정렬
    int time = list.begin()->first; //처음 끝나는 시간을 time에 저장
    int ans=1;
    for(int i=1;i<=n;i++){
        if(time<=list[i].second){//현재 끝난 시간보다 i번째 회의의 시작시간이 더 뒤에 위치하면
            ans++; //회의 수를 하나 증가시키고
            time = list[i].first; //time을 현재 추가된 회의의 끝나는 시간으로
        }
    }

    cout<<ans<<"\n";

    return 0;
}
