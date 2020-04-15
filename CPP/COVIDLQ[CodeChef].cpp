#include <bits/stdc++.h>

using namespace std;

void strrep(string &source, string from, string to){
    size_t start = 0;
    while((start = source.find(from, start)) != string::npos){   //keep repeating as long as string from exists in the source string
        source.replace(start, from.length(), to);
        start += to.length();  //If string to also contains string from
    }
}

bool isValid(string &source){
    size_t start = 0;
    size_t previous{};
    int flag = 0;
    while((start = source.find("1", start)) != string::npos){
        if(flag!=0){
            if((start-previous)<6)
                return false;
        }
        previous = start;
        start++;
        flag = 1;
    }
    return true;
}

int main(){
    int T{};
    cin>>T;

    string str{},temp{};
    while(T){
        int N;
        cin>>N; 
        for(int i{};i<N;i++){
            cin>>temp;
            str += temp;
        }
        if(isValid(str))
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
        str.clear();
        T--;
    }
    return 0;
}