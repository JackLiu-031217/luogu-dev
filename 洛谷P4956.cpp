/*
    P4956 [COCI2017-2018#6] Davor
    https://www.luogu.com.cn/problem/P4956

    After successfully conquering the South Pole, Davor is preparing for new challenges.
    Next up is the Arctic expedition to Siberia, Greenland and Norway.
    He begins his travels on 31 December 2018, and needs to collect ​N kunas (Croatian currency) by then.
    In order to do this, he has decided to put away ​X (​X ≤ 100) kunas every Monday to his travel fund,
    ​X + K kunas every Tuesday, ​X + 2* ​K every Wednesday, and so on until Sunday, when he will put away ​X + 6* ​K kunas.
    This way, he will collect money for 52 weeks, starting with 1 January 2018 (Monday) until 30 December 2018 (Sunday).

    If we know the amount of money ​N​, output the values ​X and ​K so that it is possible to collect the ​exact money amount in the given timespan.
    The solution will always exist, and if there are multiple, output the one with the greatest ​X ​ and smallest ​K ​.
*/

//https://www.luogu.com.cn/record/58036401

#include<iostream>
using namespace std;
int main(){
    int n,k=1;
    cin>>n;
    while(k<=100){
        for(int x=1;x<=100;x++){
            if(52*(7*x+21*k)==n){
                cout<<x<<endl<<k<<endl;
                return 0;
            }
        }
        k++;
    }
}