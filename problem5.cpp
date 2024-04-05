#include <iostream>
#include <iomanip>

using namespace std;

void fibonacci_reverse(int n, int a=0, int b=1){
    if(n==0){
        return;
    }
    
    fibonacci_reverse(n-1, b, a+b);
    cout<<a<<" ";
}

int main()
{
    int n;
    cin>>n;
    
    fibonacci_reverse(n);

    return 0;
}
