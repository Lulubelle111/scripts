#include <iostream>

using namespace std;

void hanoi(int n, char p, char s, char d) {

    if( n == 1 ) {

        cout << p << " -> " << d << endl;
        return;
    }

    hanoi( n-1, p, d, s );
    cout << p << " -> " << d << endl;
    hanoi( n-1, s, p, d );
    return;
    
}

int main() {

    hanoi(3, 'A', 'B', 'C');

}