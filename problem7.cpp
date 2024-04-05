#include <iostream>
#include <iomanip>

using namespace std;

string slice(string str, int i, int j){
    if(i>j || j>str.length()){
        return "";
    }
    
    return str[i] + slice(str, i+1, j);
}

int main()
{
    string input; 
    cout<<"STRING: ";
    getline(cin, input);
    
    int i,j;
    cout<<"NUMBERS:";
    cin>>i>>j;
    
    string result = slice(input, i, j);
    
    cout<<result;

    return 0;
}
