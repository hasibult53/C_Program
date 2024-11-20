// HH
#include <iostream>
using namespace std;
int main(){
int row,i,j;
cout<<"Enter number of row";
cin>>row;
for (i=row; i>=1; --i)
{
    for (j=1;j<=i; ++j)
    {
        cout <<j<<" ";
    }
    cout <<endl;
}
return 0;
}
// HH
