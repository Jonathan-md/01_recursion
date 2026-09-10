#include<iostream>
using namespace std;

int potenc(int x, int n);

int main(){
	int x,n,result;
	
	cout<<"Ingrese un numero: ";
	cin>>x;
	
	cout<<"Ingrese la potencia: ";
	cin>>n;
	
	result=potenc(x,n);
	
	cout<<x<<"^"<<n<<" = "<<result;
	
	return 0;
}

int potenc(int x, int n){
	if(n==0){
		return 1;
	}
	else{
		return x*potenc(x,n-1);
	}
}
