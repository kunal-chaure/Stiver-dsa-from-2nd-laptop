#include<iostream>
using namespace std;
int main(){
    int No = 12345;
   while(No > 0){
    cout<< No %10;
    No = No/10;
   }
    return 0;
}