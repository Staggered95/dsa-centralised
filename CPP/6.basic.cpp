#include <bits/stdc++.h>
using namespace std;

int main() {

    int z = 99;
    int *c = &z;

    (*c)++;
    //*c = *c+1;

    cout << *c;

    return 0;
}