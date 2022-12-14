#include <iostream> //for input & output
#include <random> //needed for Getrandom
#include <cstdlib>
#include <chrono>
#include <thread>
#include <unordered_map>
#include <random>


using namespace std;



class Pet {
public:
	Pet() {	
	}
	int roll(int size) {
		std::random_device dev;
		std::mt19937 rng(dev());
		std::uniform_int_distribution<std::mt19937::result_type> dist6(1, size); // distribution in range [1, 6]
		return dist6(rng);
	}

	friend class Parent;

	string returnName() // this function will set the pet name equal to a number (1,2,3)
	{

	}

	void setname(string pett) {
		unordered_map<int, string> agemap;
		agemap = { {1,"3 years old. "}, {2,"4 months old. "}, {3,"15 days old. "} };
		petname = pett;
		if (petname == "Lucy") {
			dogage = agemap[3];
		}

		if (petname == "Poo") {
			dogage = agemap[2];
		}

		if(petname == "Sonic"){
			
			dogage = agemap[1];
		}
	}

	void congrats() {
		cout << "Congratulations on your new pet, " << petname << endl;
		cout << petname << " is " << dogage << endl;
	}

	void play() {
		status();
		int choice;
		cout << "You win the game by reaching happiness level 5. Every day, random events happen as you go. These may be good or bad. Choose Carefuly. "<<endl;
		cout<< endl;
		while ((happy < 10) && (deadOalive() == true)) {
			cout << "You can 1.Work to get coins(+5 coins)        2.Buy your pet a treat(-5 coins, +1 happiness)        3.Play with your dog(+1 happiness)" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << endl;
				cout << "Great, you worked and you got your 5 coins" << endl;
				coins += 5;
				events();
				status();
			}

			if (choice == 2 && coins > 0) {
				cout << endl;
				cout << "You bought your pet some nice cookies +1 Happy" << endl;
				happy += 1;
				coins -= 5;
				events();
				status();
			}
			if (choice == 2 && coins < 0) {
				cout << endl;
				cout << "Can't do dat sirr" << endl;
				events();
				status();
			}

			if (choice == 3) {
				cout << endl;
				cout << "You had a great time playing with your dog.+1 Happy" << endl;
				happy += 1;
				events();
				status();
			}
		}
		if (happy == 10) {
			cout << "You win!";
		}
	}

	void events() {
		std::this_thread::sleep_for(std::chrono::milliseconds(600));
		int choose = roll(6);
		if (choose == 1) {
			cout << "While taking " << petname << " for a walk, a random rain started. +1 Dirty" << endl;
			dirty += 1;
			counter += 1;
		}

		if (choose == 2) {
			cout<<"6 hours have gone by and your pet has started feeling hungry. +1 Hunger" << endl;
			counter += 1;
			hungry += 1;
		}

		if(choose == 3){
			cout << "You have been playing with " << petname << " too much and now they feel tired. +1 Tired" << endl;
			tired += 1;
			counter += 1;
		}

		if (choose == 4) {
			cout << "Today is a beautiful day and " << petname << "feeling great. +1 Happiness" << endl;
			happy += 1;
		}
		if (counter == 2) {
			counter = 0;
			cout << "Oh no, its the second time in a row that something bad happened to your pet. Happiness level -1" << endl;
			happy -= 1;
		}
	}
		



	bool deadOalive ()// checks if the pet is dead or alive 
	{
		int counter = 0;
		if (dirty > 10) {
			counter += 1;
				cout << "You did not take care of your pet and it died from filthiness.";
				}
		else if (hungry > 5) {
			counter += 1;
				cout << "You did not feed your pet, they died of starvation.";
				}
		else if (tired > 6) {
			counter += 1;

				cout << "Your pet did not take a nap and died of tiredness. ";
				}
		else if (happy < 0){
			counter += 1;
			cout << "Your pet is depressed. ";
	}

		if (counter == 1) {
			return false;
		}
		return true;
}





	void status() {
		std::this_thread::sleep_for(std::chrono::milliseconds(600));
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "Coins: " << coins << endl;
		cout << "Dirty:" << dirty << endl;
		cout << "Hungry:" << hungry << endl;
		cout << "Tired:" << tired << endl;
		cout << "Happy:" << happy << endl;
		cout << endl;
		cout << endl;
		cout << endl;


	}
	

	





private:
	int coins = roll(13);
	int dirty = roll(5);
	int hungry = roll(5);
	int tired = roll(5);
	int happy = roll(2);
	int counter = 0;
	int foo[5] = { coins,dirty,hungry,tired,happy };
	string petname;
	string dogage;
};





class Parent {
public:
	Parent() {
	}
	friend class Pet;


	void setname(string &username) { // Set the users input
		usname = username;
		cout << "Alright " << usname << " Lets play a game. " << endl;
		storytime();
	}

	string storytime() { // create a story for the user
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
		cout << "Its a very stressful day in Berea, so you decide to get an Emotional support animal" << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		cout << "So, you get into the Pet shop in Richmond. After some search you end up with 3 options"<< endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
		cout <<"Sonic the Hedgehog (Sonic)                      Poo the Parrot (Poo)                      Lucy the Dog (Lucy)" << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << "Which one do you get?" << endl;
		cin >> petname;		
		return petname;
	}



	string returnPetname(){ // return pet name 
		return petname;
	}

	
	void congratpet(Pet &dapet) {
		dapet.congrats();
	}



private:
	string usname = "";
	string petname;
};









int main() {
	string username = "";
	string petname = "";
	cout << "What is your name: " << endl;
	cin >> username;
	Parent user;
	user.setname(username);
	petname = user.returnPetname();
	Pet dapet;
	dapet.setname(petname);
	user.congratpet(dapet);
	dapet.play();








	return 0;
}