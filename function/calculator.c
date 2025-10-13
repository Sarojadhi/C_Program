#include<iostream>     
using namespace std;
class Calculator
{
	public:
	int add(int a,int b)
	{
	
		return a+b;
		
		}
	int multiply(int a, int b)
	{
		return a*b;
			}		
};
int main()
{
	calculator calc;
	cout<<"multiplication:"<<calc.multiply(1,2)<<endl;
	cout<<"addition:"<<calc.add(1,2)<<endl;
	return 0;
	
	
}