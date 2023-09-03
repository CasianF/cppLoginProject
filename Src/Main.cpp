#include <iostream>

using namespace std;

class User {
private:
	string username;
	string password;

public:
	string getUsername() {
		return username;
	}

	string getPassword() {
		return password;
	}
	
	string setUsername(string newUsername) {
		username = newUsername;
	}
	
	string setPassword(string newPassword) {
		password = newPassword;
	}
	
	string getInfo() {
		cout << "Username: " << getUsername() << " Password: " << getPassword();
	}
};


int main() {
	User u1;
	User u2;
	u1.setPassword("1233");
	u1.setUsername("User1");
	u2.setUsername("User2");
	u2.setPassword("4321");
	u1.getInfo();
	u2.getInfo();
}