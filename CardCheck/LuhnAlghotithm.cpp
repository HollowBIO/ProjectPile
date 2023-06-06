#include <iostream>
#include <cmath>
#include <ctime>// bib dlya vremeni
using namespace std;
int getFirst(string cardNumber);
int getSecond(string cardnumber);
int getDigit();
int main(){
    int size;
    int result;
    string cardNumber;
    do{
    cout<<"Enter your card number\n";
    cin>>cardNumber;
    int size = cardNumber.size();
    cout<<size<<'\n';
    }while(size == 16);
    cout<<getFirst(cardNumber)<<" "<<getSecond(cardNumber)<<'\n';
    result = getFirst(cardNumber) + getSecond(cardNumber);
    if (result %10 == 0)
    {
        cout<<"Your card is valid";
    }
    else
    {
        cout<<"Your card is not valid try another";
    }
    
}
int getDigit(int number){
    return number%10+(number /10 % 10);
}
int getFirst(string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i-=2)
    {
        sum+=getDigit((cardNumber[i] - '0'));
    }
    return sum;
}
int getSecond(string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i-=2)
    {
        sum+=getDigit((cardNumber[i] - '0')*2);// ноль отнимаем шобы по табличке ASCII 0 = 48, 1 = 19 і тд
    }
    return sum;
}