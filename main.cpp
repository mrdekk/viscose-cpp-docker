#include <unistd.h>
#include <limits.h>

#include <iostream>

using namespace std;

int main() {
	char hostname[HOST_NAME_MAX];
	char username[LOGIN_NAME_MAX];
	gethostname(hostname, HOST_NAME_MAX);
	getlogin_r(username, LOGIN_NAME_MAX);

	cout << "hostname: " << hostname << ", login: " << username << endl; // prints Hello World!
	return 0;
}