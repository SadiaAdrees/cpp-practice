#include<iostream>
#include <string.h>
using namespace std;
class Hospital{
	private:
		string disease[5];
		string patientfirstname, patientlastname;
	    int age,cnic,patientbill;
	public:
		Hospital();
		void setfname(string fn);
		void setlname(string ln);
		void setage(int a);
		void setcinic(int c);
		void setdis(string a, string b,string c,string d,string e);
		void setbill(int b);
		string getfname();
		string getlname();
		int getage();
		int getcinic();
		string getdis();
		int getbill();
		void display();
};
        Hospital::Hospital(){
        disease[5]="null";
		patientfirstname="null";
	    patientlastname="null";
	    age=0;
		cnic=0;
		patientbill=0;	
		}
		void Hospital:: setfname(string fn){
			patientfirstname=fn;
		}
		void Hospital::setlname(string ln){
			patientlastname=ln;
		}
		void Hospital:: setage(int a){
			 age=a;
		}
		void Hospital:: setcinic(int c){
		
		cnic=c;	
		}
		void Hospital:: setdis(string a, string b,string c,string d,string e ){
			disease[5]=a,b,c,d,e;
		}
		void Hospital:: setbill(int b){
			patientbill=b;		
		}		
		string Hospital:: getfname(){
		return	patientfirstname;
		}
		string Hospital:: getlname(){
			return 	patientlastname;
		}
		int Hospital:: getage(){
			return  age;
		}
		int Hospital:: getcinic(){
			return cnic;
		}
		string Hospital:: getdis(){
			return disease[5];
		}
		int Hospital:: getbill(){
			return patientbill;
		}
		void Hospital::display(){
			cout<<"The First Name of the Patient is: "<<patientfirstname<<endl;
			cout<<"The Last Name of the Patient is: "<<patientlastname<<endl;
			cout<<"The Age of the Patient is: "<<age<<endl;
			cout<<"The CNIC of the Patient is: "<<cnic<<endl;
			cout<<"The disease of the Patient is:";
			for(int i=1;i<=5;i++){
				cout<<disease[i]<<" ";
				
			}
			cout<<endl;
			cout<<"The Total Bill of the Patient is: "<<patientbill;
		}
int main(){
	Hospital obj;
	obj.setfname("Ali");
	obj.setlname("Ahmed");
	obj.setage(50);
	obj.setcinic(1234567891234);
	obj.setbill(20000);
    obj.setdis("HeartAttack","Kidneystones","Osteoarthritis","Hypertension","cancer");
    
    cout<<"**Display Data by using Getter**"<<endl;
    
    cout<<"The First Name of the Patient is: "<<obj.getfname()<<endl;
	cout<<"The Last Name of the Patient is: "<<obj.getlname()<<endl;
	cout<<"The Age of the Patient is: "<<obj.getage()<<endl;
	cout<<"The CNIC of the Patient is: "<<obj.getcinic()<<endl;
	cout<<"The disease of the Patient is:";
	for(int i=1;i<=5;i++){
	cout<<obj.getdis()<<" ";
				
			}
			cout<<endl;
	cout<<"The Total Bill of the Patient is: "<<obj.getbill()<<endl<<endl;
	cout<<"**Display Data by using Display Function**"<<endl;
    obj.display();
	return 0;
}
