# List

```c
#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> l; // {1,8,3,5}
    l.push_back(3);
    l.emplace_back(5);
    l.push_front(8);
    l.emplace_front(1);

    for(auto i:l){
        cout << i << " ";
    }
    cout << endl;
    cout << "Last element :- " << l.back() << endl;
    cout << "First element :- " << l.front() << endl;

    l.pop_front();
    l.pop_back();

    for (auto i : l){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    explainList();
    return 0;
}
```
