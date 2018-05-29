#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


void EZ();









int main(){
	string answer;
	double money;
	std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << "time : "<< (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n";
	cout<<"The Port Auhtority "<<endl;
	cout<<"Of NY & NJ"<<endl;
	cout<<"             "<<endl;
	cout<<"             "<<endl;
	cout<<"George Washington Bridge"<<endl;
	cout<<"Upper Level"<<endl;
	cout<<"Lane 20"<<endl;
	cout<<"Card# 30064"<<endl;
	cout<<"Total amount of money?"<<endl;
	cin>>money; 
	cout<<"Your total amount is $15"<<endl;
	cout<<"Do you want to pay cash or by pass?"<<endl;
	cin>>answer;
  if (answer == "cash" || answer == "Cash"){
    if(money < 15 ){
      cout<<"Transaction declined"<<endl;
    }else{
      cout<< "Change: "<<money-15<<endl;
    }
  }else{
    EZ();
  }
	
}


void EZ(){
	string ans;
	cout<<"Your pass has $46.50"<<endl;
	cout<<"Do you want to use pay with the EZ pass"<<endl;
	cin>>ans;
	if (ans == "yes" || ans == "Yes"){
		cout<<"Transaction Completed"<<endl;
		cout<<"Money left on EZ pass"<< 46.50 - 15 <<endl;
	}else{
		cout<<"Transaction declined"<<endl;
	}
} 


