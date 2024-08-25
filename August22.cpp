#include <iostream>
using namespace std;


//1


/* int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=num[i];
    }
    cout << "Sum of the array: " << sum;
} */

// 2

/* int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    int odd_sum = 0,even_sum=0;
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            even_sum+=num[i];
        }
        else{
            odd_sum+=num[i];
        }
    }
    cout << "Sum of odd numbers: " << odd_sum << endl;
    cout << "Sum of even numbers: " << even_sum << endl;
} */


// 3

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    int odd = 0,even =0;
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    cout << "Number of odd numbers: " << odd << endl;
    cout << "Number of even numbers: " << even;
}