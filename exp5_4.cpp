//PRN: 22070123102
//Exp-5

#include<iostream>
using namespace std;

int main() {
    
    int i=0;
    while(i<50) {
        cout<<i+1<<"  ";
        i++;
    }
    cout<<endl;
    
    int j=100;
    do {
        cout<<j<<"  ";
        j++;
    }
    while(j<50);
}