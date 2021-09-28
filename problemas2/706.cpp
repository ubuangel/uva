#include <iostream>
#include <string>
using namespace std;
//tip :inicar escribiendo dats
int main() {
    while (cin >> s >> n) {
        if (s == 0 && n == "0")
            break;
        // for each level of string nums[5]
        for (int i = 0; i < 5; i++) {
            if (i % 2 == 0) {
                print_level(i);
            } else {
                for (int y = 0; y < s; y++)
                    print_level(i);
            }
        }
        
        cout << endl;
    }
    return 0;
}
