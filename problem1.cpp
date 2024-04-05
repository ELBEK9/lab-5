#include <iostream>
#include <iomanip>

using namespace std;

double calculate(int n){
    if(n==1){
        return 4.0;
    }
    else{
        return (0.5 * calculate(n-1))-1;
    }
}

int main()
{
    int n;
    cin>>n;
    
    double result = calculate(n);
    
    cout<<fixed<<setprecision(10);
    cout<<result;

    return 0;
}
