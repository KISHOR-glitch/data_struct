#include <iostream>
using namespace std;

void generate(string s, int n) {
    if (s.length() == n) {
        cout << s << endl;
        return;
    }

    // always allowed
    generate(s + "0", n);

    // add '1' only if previous is not '1'
    if (s.empty() || s.back() != '1')
        generate(s + "1", n);
}

int main() {
    generate("", 3);
    return 0;
}


// #include <iostream>
// using namespace std;

// void generate(string s, int n) {
//     if (s.length() == n) {

//         bool valid = true;

//         for (int i = 0; i < s.length() - 1; i++) {
//             if (s[i] == '1' && s[i+1] == '1') {
//                 valid = false;
//                 break;
//             }
//         }

//         if (valid)
//             cout << s << endl;

//         return;
//     }

//     generate(s + "0", n);
//     generate(s + "1", n);
// }

// int main() {
//     generate("", 3);
// }