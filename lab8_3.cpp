#include <iostream>
using namespace std;
#include<string>

int main (){
   int old,tall,headprice;
    cout<<"Enter your age: ";
    cin>>old;
    
if(old<=25){
    cout<<"Enter your height: ";
    cin>>tall;
   if(tall<100){
    cout<<"Your character = Chopper";
   }else if(tall<180){
    cout<<"Your character = Usopp";
   }else {
    cout<<"Enter your bounty: ";
    cin>>headprice;
   if(headprice>1100000000){
    cout<<"Your character = Zoro";
   }
    else{
    cout<< "Your character = Sanji";
   }
   }
    

}else   if(old<=60){
        cout<<"Enter your bounty: ";
        cin>>headprice;
        if(headprice>500000000){
            cout<<"Your character = Jinbe";
        }else{
            cout<<"Your character = Franky";
        }
        }
    else{
        cout<<"Your character = Brook";
    }
}
    










;