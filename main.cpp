#include <iostream>
#include <string>

using namespace std;
int sum(string a, string b);
int sub(string a, string b);

int main() {

    string a, b;
    cout << "First number  >> ";
    cin >> a;
    cout << "Second number >> ";
    cin >> b;

    sum(a,b);
    sub(a,b);
}