#include <iostream>
#include <string>

using namespace std;

int sum(string a, string b) {

    string s = "";
    int tmp = 0, tmp2 = 0;
    
    string re;
    if (a.size() >= b.size()) {
        re.resize(a.size(), '0');
        for (int i = 0; i < b.size(); i++) {
            re.push_back(b[i]);    
            re.erase(re.begin());
        }
        for (int i = 1; i < a.size(); i++) {
            
            tmp = (a[a.size() - i] - '0') + (re[re.size() - i] - '0') + tmp2;
            tmp2 = tmp / 10;
            tmp %= 10;
            s.insert(s.begin(), tmp + '0');
        }
        tmp = (a.front() - '0') + (re.front() - '0') + tmp2;
        s = to_string(tmp) + s;
        
    }
    else {
        re.resize(b.size(), '0');
        for (int i = 0; i < a.size(); i++) {
            re.push_back(a[i]);    
            re.erase(re.begin());
        }
        for (int i = 1; i < b.size(); i++) {
            
            tmp = (b[b.size() - i] - '0') + (re[re.size() - i] - '0') +tmp2;
            tmp2 = tmp / 10;
            tmp %= 10;
            
            s.insert(s.begin(), tmp + '0');
        }
        tmp = (b.front() - '0') + (re.front() - '0') + tmp2;
        s = to_string(tmp) + s;
        
    }
    
    cout << "Sum           >> " << s << '\n';
}