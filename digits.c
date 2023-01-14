#include<stdio.h>
int sumdig(int num){
    int sum;
    sum=0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }   
    return sum;
}
int revdig(int num){
    int rev;
    rev=0;
    while(num>0){
        int dig=num%10;
        rev=rev*10+dig;
        num/=10;
    }   
    return rev;
}
int ispali(int num){
    if(num==revdig(num)) return 1;
    else return 0;
}
void main(){
    printf("%d",ispali(29892));

}
