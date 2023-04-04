#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    int kor;
    int eng;
    int math;
    string name;
};

bool compare(const student& now, const student& last){
    if(now.kor != last.kor){
        return now.kor>last.kor;
    }
    else{
        if(now.eng != last.eng){
            return now.eng<last.eng;
        }
        else{
            if(now.math != last.math){
                return now.math>last.math;
            }
            else{
                return now.name<last.name;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<student> student(n);

    for(int i=0;i<n;i++){
        cin>>student[i].name>>student[i].kor>>student[i].eng>>student[i].math;
    }
    sort(student.begin(),student.end(), compare);
    for(int i=0;i<n;i++){
        cout<<student[i].name<<"\n";
    }

    return 0;
}