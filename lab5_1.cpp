#include<iostream>
using namespace std;

int main(){
    int x=1;
    int y = 0;
    int z = 0;
    while(1){
    
    cout << "Enter an integer: " ;  
    cin >> x;
    if (x== 0)
     break;
    if(x%2 == 0)
     y++;
    else 
     z++;
     
    }
    cout << "#Even numbers = " << y << "\n";
    cout << "#Odd numbers = "<< z;
    return 0;
}
