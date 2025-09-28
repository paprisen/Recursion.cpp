// Papri Sen
// 24070123070
// A3

#include <iostream>
using namespace std;
void swap(char &a , char &b){
    char temp = a;
    a = b;
    b = temp;
}
void rev(string &s, int i,int j){
    if(i >= j){
        return;
    }
    swap(s[i],s[j]);
    rev(s,i+1,j-1);
}
int main() {
    string a;
    cout << "Enter String: ";
    cin >> a;
    rev(a,0,a.length()-1);
    cout<< a;
    return 0;
}

/* 
Outputs:
Enter String: hello
olleh
*/
