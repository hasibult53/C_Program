// HH
#include <iostream>
using namespace std;
int main(){
int row,i,j;
cout<<"Enter number of row: ";
cin>>row;
for (i=1; i<=row; ++i)
{
    for (j=1;j<=i; ++j)
    {
        cout <<"*"<<" ";
    }
    cout <<endl;
}
return 0;
}
// HH
