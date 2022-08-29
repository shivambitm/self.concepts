#include<bits/stdc++.h>
using namespace std;

void encapsulation() {
	class Student {
	private:
		string name;
		int age;
		int height;

	public:
		int getAge() {
			cout << "okay" << endl;
			return this->age;
		}
	};
} //dusre classes se properties ko inherit karne ke tarike ko inheritence bolte hai

// void public() {
// 	class point() {
// 	private:
// 		int x; int y;
// 	}

// public:
// 	point

// arity - no.of operants it take
//can we overload all operators ? - No
// Operator overloading - it allows us to overload a operators for your own defined classes, it can be
//implemented by making a member function or by making a global function. assignment operator is by default implemented for compiler class

// FriendShip is granteed, not taken
//If A is a friend of B and B is a friend of C, then it's not neccesary that A will be a Friend of C ....,,xD
//Object is anything that iccupies space in the Universe Generally. I'm a object, the chai and the tabel.
//Tangible thins that occupies space are called objects.


//Object in a real world environment in object oriented environment that may have physical or conceptual existence.
//ina  car manufacing company let say blueprints of car design as calsses and instances or made different cars from that blueprints of
// car design as Objects.

//Class is blueprint or description of Objects, that can be created from it.

// Unified Modelling Language (UML) - is a graphical language for modelling object oriented software .

//Class diagram in the UML is " a type of static structure diagram that describes the structure of system by showing
// the system's Classes, their attributes, Operations(or methods), and the relationship among Objects".

//                 CLASS ASSOCIATION
// An assocoiation is used to show " How instances of two classes will references wach other."
// THe association is drawn as a line between the classes.

//                        ASSOCIATION MULTIPLICITY
// multiplicity - how many objects of each calss take part in the relationships ?
// whenever we need to used the class ehich is a part of another class then we use class aggretion


// IN AN INTERVIEW THEY CAN ASSK TO MAKE A OLA CAB BACKEND OR TO MAKE CAR PARKING SYSTEM...
// The Admin can create, delete and update the new users to make their car stand in the car parking place.
// the customer cn enter/exit the carpark , can make payments, take/scan tickerts
// system will show dashboard, displayplay car parking space availability, Assign/remove a parkingspot to a vehicle.



//   When a Class A calls Class B is called Association
//   When a Class A has an instance of Class B is called Aggregation, instances of both classes can exist independently
//   When a Class A has an instance of Class B && Class B cannot exist without Class A is called Composition
//   When a Class Child inherit Class Parent is called Generalisation/Inheritance
//   When a Class A implements Class B is called Dependency

// enum is a special "class" that represents a group of constants(unchangable variables, ike final variables). Enum are used
//  when we know all possible values at compile time, such as choices on a menu.
// interviewer wants to know that how easily we can add a function, add functiona;ity, makes the tough part of other easy by using technical knowledges,
// entrance panel, exit, payments, parkingRate, parkingAttendencePortal, CustomerInfoPortal, ElectricPanel - users wil be given the place to  park
// the vehicles where the c harginf port willl be given

// Scable, think, make assumptions, and most important ask the interviewer

// Make an elevator system will handlees all the processses under differeent functions
//code the different functions under one program
// }

int main() {
	// public;
	encapsulation;

	return 0;
}