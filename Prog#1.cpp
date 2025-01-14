#include <iostream>
using namespace std;
int main() {
    // Define prices for each product
    double priceA = 50.0; 
    double priceB = 30.0;
    double priceC = 20.0; 
    // Variables & quantity of each product
    int quantityA, quantityB, quantityC;
    cout << "Enter the quantity of Product A: ","B","C";
 cin >> quantityA;
 cout<<endl;
 cin >> quantityB;         //ABDUL GHAFAR (2430_0195)
 cout<<endl;
    cin >> quantityC;
    // Calculate the total cost
    double total = (priceA * quantityA) + (priceB * quantityB) + (priceC * quantityC);
    cout << "Total cost: $" << total <<endl;
    return 0;
}