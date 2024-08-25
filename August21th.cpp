#include <iostream>
#include <string>
using namespace std;

// 1

/* int main(){
    int n;
    cin >> n;
    (n%2==0) ? cout << "Even" : cout << "Odd";
} */

// 2

/* int main(){
    string s;
    cin >> s;
    string st = "";
    for(int i=s.length()-1;i>=0;i--){
        st+=s[i];
    }
    cout << st;
} */

// 3

int main(){
    string s;
    cin >> s;
    int c=0,v=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            v++;
        }
        else{
            c++;
        }
    }
    cout << "Vowels: " << v << endl;
    cout << "Consonants: " << c << endl;
}