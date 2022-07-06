#include<iostream>
using namespace std;
int main()
{
    int num_1,num_2;
    
    cout<<"Enter the First  Number : "<<endl;
    cin>>num_1;
    
    cout<<"Enter the Second Number : "<<endl;
    cin>>num_2;
    
    char op;
    cout<<"Enter the Operation to be performed : "<<endl;
    cin>>op;
    
    switch(op)
    {
        case '+': cout<< num_1 + num_2<<endl;
                  break;
        
        case '-': cout<< num_1 - num_2<<endl;
                  break;
        
        case '*': cout<< num_1 * num_2<<endl;
                  break;
        
        case '/': cout<< num_1 / num_2<<endl;
                  break;
        default : cout<<"Enter a Valid Operator : "<<endl;
        
        
    }
    return 0;
}
