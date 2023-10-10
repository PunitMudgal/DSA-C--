// ? find prime no.

#include<iostream>
using namespace std;
int main() {

    int n;
    cin>>n;

    let i;
    for(i=2;i<n; i++){
        if(n%i === 0){
            cout<<"Not prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime No."<<endl;
    }

 return 0;
}

// find prime no b/w two no.
#include<iostream>
using namespace std;
int main() {
 
 int a,b;
 cin>>a>>b;

 for(int num=a;num<=b;num++){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
    }
    if(i==num){
        cout<<num<<endl;
    }
 }

 return 0;
}