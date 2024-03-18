# vector

```c
#include<bits/stdc++.h> // load all libraries
using namespace std;

void explainVector(){
    vector<int> v;
    v.push_back(3);
    v.push_back(8);
    v.push_back(5);
    v.emplace_back(1); // emplace_back constructs the new element in-place directly within the container, whereas push_back typically involves creating a temporary object and then copying or moving it into the container.

    /*--------------------------
            All Elements
    ---------------------------*/
    cout << "All Elements" << endl;
    for (auto i : v)
    { // auto is int (access direct elements)
        cout << i << " ";
    }
    cout << endl;
    cout << "-----------------------------" << endl;

    /*----------------------------
          Iterate All Elements
    ------------------------------*/
    vector<int>::iterator it = v.begin();      // get begin address
    cout << "Begin Element:- " << *it << endl; // get begin element

    cout << "All Elements" << endl;
    for (vector<int>::iterator it1 = v.begin(); it1 != v.end(); it1++)
    { // end() point to address after last element
        cout << *it1 << endl;
    }
    // Another way to iterate
    // for (auto it2 = v.begin(); it2 != v.end(); it2++)
    // {
    //     cout << *it2 << " ";
    // }

    /*------------------------------
         Access element like array
    --------------------------------*/
    cout << "Access element like array :- " << v[0] << endl;
    cout << "Access last element :- " << v.back() << endl;
}

int main(){
    explainVector();
    return 0;
}
```
