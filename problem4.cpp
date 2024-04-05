#include <iostream>
#include <iomanip>

using namespace std;

double series_sum(int n){
    if(n==1){
        return 1.0;
    }
    if(n%2==0){
        return -1.0/n + series_sum(n-1);
    }
    else{
        return 1.0/n + series_sum(n-1);
    }
    
}

int main()
{
    int n;
    cin>>n;
    
    double result = series_sum(n);
    
    cout<<fixed<<setprecision(4);
    cout<<result;

    return 0;
}
