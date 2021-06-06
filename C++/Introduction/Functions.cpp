#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int max;
    max=a;
    if(b>a){
        if(b>c && b>d){
            max=b;
        }
        else if (c>d){
            max=c;   
        }
        else{
            max=d;
        }
    }
    else if(c>a){
        if(c>b && c>d){
            max=c;
        }
        else if (b>c){
            max=b;   
        }
        else{
            max=d;
        }    
    }
    else if(d>a){
        if(d>c && d>b){
            max=d;
        }
        else if (b>d){
            max=b;   
        }
        else{
            max=c;
        }    
    }
    return max;
}    
