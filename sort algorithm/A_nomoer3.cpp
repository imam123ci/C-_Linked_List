#include <map>
#include<iostream>
using namespace std;



map <char, int> maphuruf(char kalimat[], int pk){
    map <char, int> listhuruf;
    //The best way to find duplicate character
    // is mapping every char with it count.
    // So in our worst case you need 2d array (in this language map)
    // with array maximum length 26 * 2 and time complexity O(n)

    for (int i = 0; i< pk; i++)
        listhuruf[kalimat[i]] = listhuruf[kalimat[i]] ? listhuruf[kalimat[i]] + 1: 1;

    // note that my second looping is for eliminate non duplicate character
    // and print out data
    cout << "Duplikat :" << endl;
    for (auto &m : listhuruf){
        if(m.second == 1)
            listhuruf.erase(m.first);
        else
            cout << m.first << " = " << m.second <<endl;
    }

    return listhuruf;
}

int main(){
    char arr[] = {'A', 'A', 'B', 'R', 'D', 'T', 'W', 'P', 'V', 'B', 'B'};
    map <char,int> lh = maphuruf(arr, 11);

    return 0;
}