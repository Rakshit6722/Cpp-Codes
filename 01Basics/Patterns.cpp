#include<iostream>
#include<math.h>
using namespace std;

void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=1;i<=n/2;i++){
      for(int j=1;j<=i;j=j++){
        cout<<"*";
        cout<<" "<<endl;
      }
      cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
      
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
          cout<<endl;
    }
}

int ReverseNum(int n){
    int rev=0,rem;
    while(n>0){
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
    }
    return rev;
}

bool palindrome(int n)
{
    int rev=0,rem;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    int value = rev;
    if(value == n){
        return true;
    }
    else{
        return false;
    }
}

void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int j=n;j>0;j=j-2){
            cout<<"*";
        }
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
 int Multiplier(int x){
             int rem,value=0;
             while(x!=0){
                rem=x%10;
                value=value+pow(rem,2);
                x=x/10;
             }
             return value;
        }
 bool isHappy(int n) {
    int resultHappy;
        resultHappy=Multiplier(Multiplier(n));
        if(resultHappy==1){
            return true;
        }
        else{
            return false;
        }
    }
int main(){
        // pattern1(5);
       // pattern2(10);
      // pattern3(10);
     // pattern4(10);
    // pattern5(5);
   // pattern6(10);
  // pattern7(10);
//   pattern8(10);
//    cout<<palindrome(121);
cout<<isHappy(19);
}