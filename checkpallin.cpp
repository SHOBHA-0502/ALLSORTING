#include <iostream>

using namespace std;
bool letcheck(char input[], int start, int end){
    if(start>end){
        return true;
    }
    if(start == end ){
        return true ;
    }
    if(input[start] != input[end]){
        return false;
    }
    letcheck(input,start+1,end-1);
}

bool checkPalindrome(char input[]) {
    int count =0 ; 
    for(int i =0; input[i] !='\0'; i++){
        count++;
    }
    int start = 0;
    int end = count -1;
    
    return letcheck(input,start,end);
    
}


int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}