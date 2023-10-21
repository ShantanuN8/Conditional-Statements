#include <iostream>

using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the first number:"<<endl;
    cin>>x;
    cout<<"Enter the Second number:"<<endl;
    cin>>y;
    cout<<"Enter the third number:"<<endl;
    cin>>z;
    if ((x>y) && (x>z))
    cout<<"The first number is largest"<<endl;
    else if ((y>x) && (y>z))
    cout<<"The second number is largest"<<endl;
    else
    cout<<"The third number is largest"<<endl;
    
}
/*OUTPUT
Enter the first number:
45
Enter the Second number:
93
Enter the third number:
41
The second number is largest
*/
