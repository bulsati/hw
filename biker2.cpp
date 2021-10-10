#include <iostream>
using namespace std;

int main() {
    int speed, time1;
    int si;
    si = 109;
    cin >> speed >> time1;
    cout << (((speed * time1) % si) + si) % si;

    return 0;