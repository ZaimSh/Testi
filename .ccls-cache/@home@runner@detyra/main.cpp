#include <iostream>
using namespace std;

int main() { 

  double h,j,k;

  cin>>h>>j>>k;
  
  if(h>j && h> k){
    cout<<"Numri me i madh eshte "<<h;
    if(j<k){
      cout<<"Numri me i vogel eshte "<<j;
    } else {
      cout<<"Numri me i vogel eshte "<<k;
    };
  } else if (j>k){
    cout<<"Numri me i madh eshte "<<j;
    if(h<k){
      // ktu e kam ba gabimin te testi  h>k
      cout<<"Numri me i vogel eshte "<<h;
    } else {
      cout<<"Numri me i vogel eshte "<<k;
    };
  } else {
    cout<<"Numri me i madh eshte "<<k;
    if(h<j){
      //njejte edhe ktu e kam ba h>j, osht kan gabim qe jom habit tu shpejtu.
      cout<<"Numri me i vogel eshte "<<h;
    } else {
      cout<<"Numri me i vogel eshte "<<j;
    }
  }

  return 0;

}