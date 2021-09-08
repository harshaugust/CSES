#include <bits/stdc++.h>
using namespace std;

bool isVowel(char sel) {
    if (sel == 'A' || sel == 'E' || sel == 'I' || sel == 'O' || sel == 'U') return true;
    else return false;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    for (int _ = 1; _ <= t; _++) {
        string s;
        cin >> s;
        map<char, int> mp;
        int n = s.size();
        int vowels = 0;
        int consonants = 0;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            if (isVowel(s[i])) {
                vowels++;
            }
            else {
                consonants++;
            }
        }
        int vm = 0, cm = 0;
        char c, v;

        for (auto x: mp) {
            if (isVowel(x.first)) {
                if (x.second >= vm) {
                    vm = x.second;
                    v = x.first;
                }

            }
            else {
                if (x.second >= cm) {
                    cm = x.second;
                    c = x.first;
                }
            }
        }
        int final = 0;
        char f;
        if (vm == cm) {
            f = v;
            final= vm;
        }
        else if (vm > cm) {
            final = vm;
            f = v;
        }
        else {
            final = cm;
            f = c;
        }

        set<char> se;
        for (int i = 0; i < n; i++) {
            se.insert(s[i]);
        }

        if (se.size() == 1) {
            cout << "Case #" << _ << ": " << 0 << endl;
        }
        else {
            int ans = 0;
            for (int i = 0; i < n; i++) {
                if (isVowel(f)) {
                    if (isVowel(s[i])) {
                        if (s[i] != f) {
                            ans += 2;
                        }
                    }
                    else {
                        ans++;
                    }
                }
                else {
                    if (isVowel(s[i])) {
                        ans++;
                    }
                    else {
                        if (s[i] != f) {
                            ans += 2;
                        }
                    }
                }
            }

            int cnt = 0;
            char C;
            if (consonants <= vowels) {
                for (auto x: mp) {
                    if (isVowel(x.first) == false) {
                        if (x.second >= cnt) {
                            cnt = x.second;
                            C = x.first;
                        }
                    }
                }
            }
            else {
                for (auto x: mp) {
                    if (isVowel(x.first)) {
                        if (x.second >= cnt) {
                            cnt = x.second;
                            C = x.first;
                        }
                    }
                }
            
            }
            
            int A = 0;

            if (consonants <= vowels) {
                A =  2 * (consonants - cnt) + vowels;
            }
            else {
                A = 2 * (vowels - cnt) + consonants;
            }

            int AA = min(ans, A);

            cout << "Case #"<< _ << ": " << AA << endl;
        }
    }
    return 0;
}
