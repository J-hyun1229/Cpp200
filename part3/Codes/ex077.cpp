#include <string>
#include <iostream>

using namespace std;

int main() {
	const string kMyJob = "developer";

	string ques = "who are you: ";
	string answer = "my job is : ";

	cout << ques << kMyJob << endl;
	cout << answer << kMyJob << endl;

	return 0;
}