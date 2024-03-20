#include <iostream>
#include <string>

using namespace std;

int sub(string a, string b) {
    
    int tmp = 0, tmp2 = 0;
    string s;
    string re;

    if (a.size() > b.size()) {
         re.resize(a.size(), '0');
        for (int i = 0; i < b.size(); i++) {
            re.push_back(b[i]);    
            re.erase(re.begin());
        }
        for (int i = 1; i <= a.size(); i++) {

            if (a[a.size() - i] >= re[re.size() - i]) {
                tmp = a[a.size() - i] - re[re.size() - i];
            }
            else {
                a[a.size() - i - 1]  -= 1;
                tmp = a[a.size() - i] + 10 - re[re.size() - i];
                tmp2--;
            }
            s.insert(s.begin(), tmp + '0');
        }
        
    }

    else if (a.size() < b.size()) {
         re.resize(b.size(), '0');
        for (int i = 0; i < a.size(); i++) {
            re.push_back(a[i]);    
            re.erase(re.begin());
        }
        for (int i = 1; i <= b.size(); i++) {

            if (b[b.size() - i] >= re[re.size() - i]) {
                tmp = b[b.size() - i] - re[re.size() - i];
            }
            else {
                b[b.size() - i - 1]  -= 1;
                tmp = b[b.size() - i] + 10 - re[re.size() - i];
                tmp2--;
            }
            s.insert(s.begin(), tmp + '0');
        }

        while (true) {
                if (s.front() == '0') s.erase(s.begin());
                else break;
            }

        s.insert(s.begin(), '-');
    }

    else {
        if (a > b) {
            for (int i = 1; i <= a.size(); i++) {

            if (a[a.size() - i] >= b[b.size() - i]) {
                tmp = a[a.size() - i] - b[b.size() - i];
            }
            else {
                a[a.size() - i - 1]  -= 1;
                tmp = a[a.size() - i] + 10 - b[b.size() - i];
                tmp2--;
            }
            s.insert(s.begin(), tmp + '0');
            }
        }
        else if (a < b) {
            for (int i = 1; i <= b.size(); i++) {

                if (b[b.size() - i] >= a[a.size() - i]) {
                    tmp = b[b.size() - i] - a[a.size() - i];
                }
                else {
                    b[b.size() - i - 1]  -= 1;
                    tmp = b[b.size() - i] + 10 - a[a.size() - i];
                    tmp2--;
                }
                s.insert(s.begin(), tmp + '0');
            }

            while (true) {
                if (s.front() == '0') s.erase(s.begin());
                else break;
            }
            s.insert(s.begin(), '-');
        }
        
        else {
            cout << "Sub           >> " << 0 << '\n';
            return 0;
        }
    
    }

    while (true) {
        if (s.front() == '0') s.erase(s.begin());
        else break;
    }
    std::cout << "Sub           >> " << s << '\n';
}