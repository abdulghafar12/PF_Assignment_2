#include<iostream>
using namespace std;
int main()
{
    // additional task1
int priA=50.0, priB=30.0, priC=20.0  ;
int qunA , qunB , qunC ;
cout<<"The price of A ,B, C  is :  "<<" \t"<<priA<<"\t"<<priB<<"\t"<<priC<<endl;
cout<<" Enter the quantity of A ,B & C"<<endl;
cin>>qunA;
cout<<endl;
cin>>qunB;
cout<<endl;
cin>>qunC;
double total = ( qunA*priA) + ( qunB*priB) + ( qunC*priC);
cout<<"The total price is "<<total<<endl;
double ftotal = (total >= 200)?total * 0.9: total;
cout<<" Total Price after discount :  "<<ftotal<<endl;
int shiping = ( ftotal < 150)? 15 : 0.0 ;
 int AfterShipiPrice = ftotal + shiping;
cout<<" Total Price after discount & shiping : " <<AfterShipiPrice;
cout<<"   "<<endl;
cout<<endl;
int PaymentMethod;
cout<<"Select the payment method( 1 for Credit Card, 2 for paypal and 3 for Cash: "<<endl;
cout<<endl;
cin>>PaymentMethod;
double TransFee = (PaymentMethod == 1) ?  AfterShipiPrice * 0.02 :
(PaymentMethod == 2) ?  AfterShipiPrice * 0.03 : 0.0;
double TotAfterPay = AfterShipiPrice+ TransFee;
    
cout << "Total Price after applying transaction fee: " <<TotAfterPay<<endl;
    return 0;
}