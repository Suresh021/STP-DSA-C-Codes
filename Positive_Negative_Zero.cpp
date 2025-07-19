#include <iostream>
using namespace std;

class Number{
   public: 
      bool IsPositive(int n){
        if(n > 0)
           cout<<"Positive"<<" ";
        else if(n < 0) 
           cout<<"Negative"<<" ";
        else 
           cout<<"Zero"<<" ";
   }
};
   int main(){
    int n;
    cin>>n;
    
    Number num;
    num.IsPositive(n);
    return 0;
   }