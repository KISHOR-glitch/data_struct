#include <iostream>
#include <vector>
using namespace std;

string saydigit(int n, vector<string> &v){

    if(n == 0){
        return "";
    }

    int num = n % 10;

    string res = saydigit(n/10, v);   // recursive call

    return res + v[num] + " ";
}

int main(){
    int n;
    cin >> n;

    vector<string> v = {
        "zero","one","two","three","four",
        "five","six","seven","eight","nine"
    };

    cout << saydigit(n, v);

    return 0;
}