#include <iostream>
#include <iomanip>

using namespace std;

bool is_palindrome(string str){
    if(str.length()<=1){
        return true;
    }
    
    int start=0;
    int end=str.length()-1;
    while(start<end){
        if(tolower(str[start])!=tolower(str[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string input; 
    cin>>input;
    
    bool result=is_palindrome(input);
    
    cout<<result;

    return 0;
}
