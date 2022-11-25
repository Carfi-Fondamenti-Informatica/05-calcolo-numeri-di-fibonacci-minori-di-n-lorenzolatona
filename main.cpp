#include <iostream>
using namespace std;

int main() {
   int i,n=0,x=1,y=1,z;
    cin>>n;
    cout<<x<<endl;
    cout<<y<<endl;
    for (int i=2;i<=n;i++){
        z = x + y;
        x = y;
        y = z;
        if (z<=n)
            cout << z << endl;
    }
   return 0;
}
