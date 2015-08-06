#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){

    int n, result = 0 ,temp; cin >> n;
    set<int> s;

    while (n--){
        char ch; int log;
        cin >> ch >> log;

        if (ch == '+'){
            s.insert(log);
        }
        else{
            if (s.find(log) == s.end()){
                result++;
            }
            else{
                s.erase(log);
            }
        }

        temp = s.size();
        result = max(temp, result);
    }

    cout << result << endl;

    return 0;
}
