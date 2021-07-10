
#include <iostream>
#include <vector>
#define all(x) x.begin(),x.end() 
using namespace std;
class User{
	public:
	int id;
	string name;
	string location;
	string carPref;
	User(int id,string name,string location){
		this->id=id;
		this->name=name;
		this->location=location;
	}
	void getPrefereces(string carPref){
		this->carPref=carPref;
	}
};
