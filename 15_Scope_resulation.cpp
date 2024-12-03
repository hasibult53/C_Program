#include <iostream>
#include <string>
using namespace std;
class human{
public:
    string name="no name";
    void introduce();
};
 void human::introduce()
{
   cout<< human::name <<endl;
}
 int main()
{
   human anil;
   anil. name ="anil";
   anil.introduce();
   return 0;
}
