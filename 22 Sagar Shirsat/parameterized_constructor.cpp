#include <iostream>
using namespace std;
class integer
{
    int m, n;
    public:
        integer(int, int);      // constructor declared
        void display(void)
    {
        cout << "m = "<<m;
        cout << "n = "<<n;
    }
};

integer :: integer(int x, int y)        // constructor defined
{
    m = x; n = y;
}

int main()
{
    integer int1(0,100):                //constructor called implicitly 
    integer int2 = integer(25, 75);     // constructor called explicitly
    cout<<"OBJECT1"<<"\n";
    intl.display();
    cout<<"OBJECT2";
    int2.display();
    return 0;
}
