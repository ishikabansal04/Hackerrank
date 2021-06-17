#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b,a1,b1;
  char i,j;
  cin>>a;
  cin>>b;
  int alen=a.size();
  int blen=b.size();
  cout<<alen<<" "<<blen<<"\n";
  cout<<a+b<<"\n";

  i=a[0];
  a[0]=b[0];
  b[0]=i;
  cout<<a<<" "<<b;
  

    return 0;
}

