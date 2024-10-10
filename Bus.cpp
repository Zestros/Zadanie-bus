#include <bits/stdc++.h>
using namespace std;

int hours(int n){
return n/60;
}
int minute(int n){
return n%60;
}
int main()
{int time_path;
int time_start = 420;
int time_rest;
int time_end = 1140;
int times=time_start;
    cout<<"Write len path:";
    cin>>time_path;
    cout<<"Write rest:";
    cin>>time_rest;
time_path = abs(time_path);
time_rest = abs(time_rest);
while (times+time_path*2+time_rest<time_end){

    cout<<"Time arrive in B: "<<hours(times+time_path)<<":"<<setfill('0')<<setw(2)<<minute(times+time_path);
    cout<<" Time end rest B: "<<hours(times+time_path+time_rest)<<":"<<setfill('0') <<setw(2)<<minute(times+time_path+time_rest);
    cout<<" Time arrive in A: "<<hours(times+2*time_path+time_rest)<<":"<<setfill('0') <<setw(2)<<minute(times+2*time_path+time_rest);
    cout<<" Time end rest A: "<<hours(times+2*time_path+2*time_rest)<<":"<<setfill('0') <<setw(2)<<minute(times+2*time_path+2*time_rest)<<endl;
    times+=2*time_path+2*time_rest;
}
    return 0;
}
