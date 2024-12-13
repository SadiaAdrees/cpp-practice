#include<iostream>
using namespace std;
class AirConditioner{
	private:
		string nameofbrand;
		int tonofAC, costofAC;
	public:
		AirConditioner(){
		nameofbrand="null";
		tonofAC=0;
		costofAC=0;		
		}
		AirConditioner(string n,int t,int c){
		nameofbrand=n;
		tonofAC=t;
		costofAC=c;	
		}
		void setname(string m){
			nameofbrand=m;
		}
		void setton(int to){
		tonofAC=to;
		}
		void setcost(int co){
			costofAC=co;	
		}
		string getname(){
			return nameofbrand;
		}
		int getton(){
		return tonofAC;
		}
		int getcost(){
			return costofAC;
		}
		void display(){
			cout<<"The Ac Brand name is:"<<nameofbrand;
			cout<<"The ton of Ac is :"<<tonofAC;
			cout<<"The cost of the Ac is : "<<costofAC;
			
		}
		
		
};
int main(){
	AirConditioner obj[4];
	string n;
	int t,c;
	
	for(int i=1;i<=3;i++){
		cout<<"Enter the Brand name of "<<i<<" Ac: ";
		cin>>n;
		obj[i].setname(n);
		cout<<"Enter the Ton of the "<<i<<" Ac: ";
		cin>>t;
		obj[i].setton(t);
		cout<<"Enter the cost of the "<<i<<" Ac: ";
		cin>>c;
		obj[i].setcost(c);
		
		
	}
	cout<<endl;
	for(int i=1;i<=3;i++){
		cout<<"The Brand name of "<<i<<" Ac is "<<obj[i].getname()<<endl;
		cout<<"The ton of  the  "<<i<<" Ac is "<<obj[i].getton()<<endl;
		cout<<"The cost of the "<<i<<" Ac is "<<obj[i].getcost()<<endl;
	}
	cout<<endl;
	for(int i=1;i<=3;i++){
		if (i==1){
	if (obj[i].getcost() < obj[i+1].getcost()  ){
		if(obj[i].getcost() < obj[i+2].getcost()){
			cout<<"The cheapest Ac Brand name is: "<<obj[i].getname();
			}
	}
		
	}
	if (i==2){
	if (obj[i].getcost() < obj[i-1].getcost()  ){
		if(obj[i].getcost() < obj[i+1].getcost()){
			cout<<"The cheapest Ac Brand name is: "<<obj[i].getname();
			}
	}
		
	}
	if (i==3){
	if (obj[i].getcost() < obj[i-2].getcost()  ){
		if(obj[i].getcost() < obj[i-1].getcost()){
			cout<<"The cheapest Ac Brand name is: "<<obj[i].getname();
			}
	}
		
	}
	   
	 }
	
	
	
	
	return 0;
}
