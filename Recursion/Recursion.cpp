#include <iostream>
using namespace std;
    
	int factorial(int n) {
		if(n == 0) return 1;
		int partialFactorial = factorial(n-1);
		return n * partialFactorial;
	}
	
	int main(){
		int n;
		cin>>n;
		if(n < 0){
			cout<<"Error";
		}
		else{
			cout<<factorial(n);
		}
		
		return 0;
	}

// https://www.codingninjas.com/codestudio/problems/factorial-of-a-number_1115779?source=youtube&campaign=Recursion_Fraz&utm_source=youtube&utm_medium=affiliate&utm_campaign=Recursion_Fraz