#include <iostream>
#include <iomanip>

using namespace std;

int calculate_binomial(int n, int k){
    if(k==0 || k==n){
        return 1;
    }
    
    return calculate_binomial(n-1, k-1) + calculate_binomial(n-1, k);
    
}

int main()
{
    int n, k;
    cin>>n>>k;
    
    int result = calculate_binomial(n, k);

    cout<<result;

    return 0;
}
