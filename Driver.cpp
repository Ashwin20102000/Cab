#include <iostream>
#include <vector>
#define all(x) x.begin(),x.end() 
using namespace std;
class Driver{
	public:
	int id;
	string name;
	string location;
	string car;
	vector<string> reviews; 
	Driver(int id,string name,string location,string car){
		this->id=id;
		this->name=name;
		this->car=car;
		this->location=location;
	}
	void storeReview(string s){
		reviews.push_back(s);
	}
};
