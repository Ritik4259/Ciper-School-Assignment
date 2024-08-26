#include <iostream>
#include <string>

using namespace std;


//1
int main(){
    string s1,s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    cout << s1+s2;

}


// 2

int main(){
    int mark[5];
    double sum=0;
    for(int i=0;i<5;i++){
        cout << "Enter grade " << i+1 <<": ";
        cin >> mark[i];
        sum+=mark[i];
    }
    cout << "The average grade is: " << sum/5;
} 

// 3

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The square of " << n << " is: "<< n*n;

}