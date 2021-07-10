#include <iostream>
#include <vector>
#include "Db.cpp"
#define all(x) x.begin(),x.end() 
using namespace std;

int main()
{
	Db db;
	User user(1,"Ash","poy");
	Driver driver1(1,"Muth","poy","Xteem");
	Driver driver2(2,"Karupu","poy","RollsRoylce");
	db.addUser(user);
	db.addDriver(driver1);
	db.addDriver(driver2);
	// if users need preferences
	user.getPrefereces("Xteem");
	// add review
	db.addReview(2,"Nice Driving Man");
	db.addReview(1,"Dangerous Driver Thou!!");
	db.addReview(1,"Dangerous But Safe Thou!!");
	db.addReview(2,"Killer ride Man!!");
	// user & location == driver & location
	cout<<"---------------------"<<endl;
	db.getDriverForLocation(1);
	// view drivers review
	cout<<"---------------------"<<endl;
	db.viewDriverReviews(1);
	cout<<"---------------------"<<endl;
	return 0;
}
