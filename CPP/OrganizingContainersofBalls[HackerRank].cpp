#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;

    while(q){
        int n;
        cin>>n;
        
        /*Approach:-> It will only be possible if the individual sum of each row of nxn matrix is same as individual sum of each column
            i.e of in a 3x3 matrix, sum of elements of individual row are 3,5,4 then the sum of elements of individual columns must alos be same i.e 3,5,4 or 4,5,3 or 3,4,5 and so on
        */ 

        vector<vector<int>> M (n, vector<int>(n,0));
        set<int> sum;
        int _temp,add{};
        for(int i{};i<n;i++){
            for(int j{};j<n;j++){
                cin>>_temp;
                M.at(i).at(j) = _temp;
                add += _temp;  //get individual sum of each row
            }
            sum.insert(add);  //add sum of each row to a set
            add = 0;
        }
        size_t size = sum.size();    //get the size of the set

        add = 0;
        for(int i{};i<n;i++){
            for(int j{};j<n;j++){
                add += M.at(j).at(i);  //get individual sum of each column
            }
            sum.insert(add);  //add sum of each column to the same set
            add = 0;
        }

        if(size==sum.size())   //since set can't have duplicate elements, it's size won't increase if the answer is Possible 
            cout<<"Possible"<<endl;
        else           //else the operation is impossible
            cout<<"Impossible"<<endl;

        q--;
    }
    return 0;
}