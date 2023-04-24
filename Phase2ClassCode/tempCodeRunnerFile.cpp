#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    string answer;
    
    cout << "Welcome to the quiz game!\n";
    cout << "Question 1: What is the capital city of Japan?\n";
    cout << "A. Tokyo\nB. Kyoto\nC. Osaka\n";
    cin >> answer;
    if (answer == "A" || answer == "a") {
        cout << "Correct!\n";
        score++;
    }
    else {
        cout << "Incorrect!\n";
    }
    
    cout << "Question 2: Who invented the telephone?\n";
    cout << "A. Thomas Edison\nB. Alexander Graham Bell\nC. Albert Einstein\n";
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct!\n";
        score++;
    }
    else {
        cout << "Incorrect!\n";
    }
    
    cout << "Question 3: What is the largest planet in our solar system?\n";
    cout << "A. Saturn\nB. Jupiter\nC. Neptune\n";
    cin >> answer;
    if (answer == "B" || answer == "b") {
        cout << "Correct!\n";
        score++;
    }
    else {
        cout << "Incorrect!\n";
    }
    
    cout << "Your final score is: " << score << " out of 3\n";
    return 0;
}
