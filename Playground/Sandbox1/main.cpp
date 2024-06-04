#include <iostream>

using namespace std;

int main(){
    char A = '2';
    int sum = A + 10;
    std::cout<<"sum = "<<sum;
    
    int sum1 = 'A' + 10;
    std::cout<<"\nsum1  = "<<sum1;
    
    char sum2 = 'A' + 10;
    std::cout<<"\nsum2 = "<<sum2;
    
    char B = '2322';
    int sum3 = B + 10;
    std::cout<<"\nsum3 = "<<sum3<<endl;

    char C = '6';
    int sum4 = C;
    std::cout << sum4;


  return 0;
}