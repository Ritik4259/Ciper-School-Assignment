#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(num[j]>num[j+1]){
                int t = num[j];
                num[j] = num[j+1];
                num[j+1] = t;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << num[i] << " ";
    }
} 

// 2

int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    for(int i=1;i<n;i++){
        int key = num[i];
        int j = i-1;
        while(j>=0 && num[j]>key){
            num[j+1] = num[j];
            j = j-1;
        }
        num[j+1] = key;
    }
    for(int i=0;i<n;i++){
        cout << num[i] << " ";
    }
}