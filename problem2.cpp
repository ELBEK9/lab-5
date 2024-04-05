#include <iostream>
#include <iomanip>

using namespace std;

int calculate_f_n(int n){
    if(n==1){
        return 3;
    }
    else{
        return calculate_f_n(n-1) * calculate_f_n(n-1) + 3;
    }
}

int main()
{
    int n;
    cin>>n;
    
    int result = calculate_f_n(n);

    cout<<result;

    return 0;
}
