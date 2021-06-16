#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int pos;
    cin>>pos;
    input.erase(input.begin()+(pos-1));
    int a,b;
    cin>>a>>b;
    for(int i=a;i<b;i++){
        input.erase(input.begin()+(a-1));
    }
    cout<<input.size()<<endl;
    int size =input.size();
    for(int i=0;i<size;i++){
        cout<<input[i]<<" ";
    }
    return 0;
}
