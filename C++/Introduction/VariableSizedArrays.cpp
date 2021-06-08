#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int r,q;
    cin>>r>>q;
    vector<vector<int>> input(r);
    for(int i=0;i<r;i++){
         int c;
         cin>>c;
         for(int j=0;j<c;j++){
             int val;
             cin>>val;
             input[i].push_back(val);
         }
    }

    for(int i=0;i<q;i++){
        vector<int> query(2);
        for(int j=0;j<2;j++){
            cin>>query[j];
        }
        cout<<input[query[0]][query[1]]<<endl;
    }
    return 0;
}
