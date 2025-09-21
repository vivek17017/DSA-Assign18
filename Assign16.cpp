#include<iostream>
using namespace std;
int sumOfFirstN(int n){
    if(n>0){
        return sumOfFirstN(n-1)+n;
    }
}
int sumOfFirstNOdd(int n){
    if(n>0){
        return sumOfFirstNOdd(n-1)+2*n-1;
    }
}
int sumOfFirstNEven(int n){
    if(n>0){
        return sumOfFirstNEven(n-1)+2*n;
    }
}
int sumOfSquaresOfFirstN(int n){
    if(n>0){
        return sumOfSquaresOfFirstN(n-1)+n*n;
    }
}
int fac(int n){
    if(n==0)
        return 1;
    else{
        return fac(n-1)*n;
    }
}
int sumOfDigits(int n){
    if(n>0){
        return sumOfDigits(n/10)+n%10;
    }
}
void printBinary(int n){
    if(n>0){
        printBinary(n/2);
        cout<<n%2;
    }
} 
int hcf(int x,int y){
   if(y%x==0)
       return x;
   hcf(y%x,x);
    
}
int HCF(int x,int y){
    int a=x<y?x:y;
    int b=x>y?x:y;
    return hcf(a,b);

}
int power(int x,int y){
   if(y==0)
   {
    return 1;
   }
   else{
    return power(x,y-1)*x;
   }
}
int nthTermOfFibo(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else
    {
        return nthTermOfFibo(n-1)+nthTermOfFibo(n-2);
    }
}
int main(){
    cout<<sumOfFirstNEven(1);
} 