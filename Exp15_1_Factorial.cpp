// Papri Sen
// 24070123070
// A3

#include<iostream>
using namespace std;

int fact(int n){
    if(n<0|| n==0){
        return 1;
    }

    else{
        return n*fact(n-1);
    }
}
int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout<<"Factorial of the entered number is:"<<fact(num)<<endl;

    return 0;
}

/* 
Outputs:
Enter a number: 5
Factorial of the entered number is:120
*/

