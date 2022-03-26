#include <iostream>
using namespace std;

int main() {
    int r, h, d, s;
  

    cin >> h;
  

    for(r = 1; r <= h - 1; r++) {
        cout << "\t";
        for(d = 1; d <= r; d++)
            cout << d;
        for(s = 1; s <= 2 * (h - r); s++)
            cout << " ";
        putchar('\b');
        for(d = r; d >= 1; d--)
            cout << d;
        putchar('\n');
        
    }


    return 0;
}
