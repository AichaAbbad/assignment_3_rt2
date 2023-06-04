#include<iostream>
using namespace std;

char i;
char l;

int main(){
    cout << "Enter the letters" << endl;
    cin >> l;
    cout << "The letters are ordered as follows"<< endl;
    for (i = 'a'; i <= l; i++){
        cout << i << " ";
    }
    return 0;     
}