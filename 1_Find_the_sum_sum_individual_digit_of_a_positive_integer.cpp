//HH
#include <iostream>
using namespace std;
int sum_Of_digit(int n){
int digit, sum=0;
while(n!=0){
    digit =n%10;
    sum=sum+digit;
    n=n/10;
}
return sum;
}
int main ()
{

    int number,digit_sum;
    cout<<"Enter positive inter within th range: ";
    cin >> number;
    digit_sum=sum_Of_digit(number);
    cout<<"Sum of digit of " << number << " is " << digit_sum;
    return 0;
}

//HH
