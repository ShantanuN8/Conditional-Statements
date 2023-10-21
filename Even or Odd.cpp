#include <iostream>

using namespace std;
int main()
{
    int myinput;
    cout<<"Enter a number:-";
    cin>>myinput;
    if(myinput==0){
        cout<<"Number is zero";
    }
    else if(myinput%2==0){
        cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
}
/*OUTPUT
Enter a number:-2
Number is even

Enter a number:-57
Number is odd

Enter a number:-0
Number is zero
*/
