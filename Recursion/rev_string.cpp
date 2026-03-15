#include <iostream>
using namespace std;

string reverse_str(string s){
    if(s.size() == 0)
        return "";

    return reverse_str(s.substr(1)) + s[0];
}

int main(){
    string b_rev="kish";
  
}