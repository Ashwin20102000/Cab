#include <iostream>
#include <vector>
#include "User.cpp"
#include "Driver.cpp"
#define all(x) x.begin(),x.end() 
using namespace std;

class Db{
	public:
	vector<User> users;
	vector<Driver> drivers;
	void addUser(User user){
		users.push_back(user);
	}
	void addDriver(Driver driver){
		drivers.push_back(driver);
	}
	void showUser(int id){
		cout<<"user_name : "<<users[id-1].name<<endl;
		cout<<"location : "<<users[id-1].location;
	}
	void getDriverForLocation(int id){
		string locat = users[id-1].location;
		string car = drivers[id-1].car;
		for(int i=0;i<drivers.size();i++){
			if(locat==drivers[i].location && car==drivers[i].car){
				cout<<"Driver Name: "<<drivers[i].name<<endl;
				cout<<"Driver Location: "<<drivers[i].location<<endl;
				cout<<"Driver Car: "<<drivers[i].car<<endl;
				break;
			}
		}
	}
	void addReview(int id,string s){
		drivers[id-1].storeReview(s);
	}
	void viewDriverReviews(int id){
		cout<<"Reviews for "<<drivers[id-1].name<<":"<<endl;
		for(string s:drivers[id-1].reviews){
			cout<<s<<endl;
		}
	}
};
