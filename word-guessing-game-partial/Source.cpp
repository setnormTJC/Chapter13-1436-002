#include <iostream>

#include<fstream>

#include<string>

using namespace std;

string getRandomWord()
{
    int randomNumber = rand() % (500'000);
    cout << randomNumber << endl;
    ifstream dictFile{ "C:\\Users\\Work\\Downloads\\words.txt" };

    string currentWord; 
    for (int i = 0; i < randomNumber; i++)
    {
        getline(dictFile, currentWord);
    }

    return currentWord;
}

int main()
{
    //srand(time(0)); 
    //string correctWord = getRandomWord(); 

    //cout << correctWord << endl; 

    cout << "Player one - enter a (single) word to be guessed (by Player 2): " << endl; 

    string correctWord; 
    cin >> correctWord; 

    //prevent cheater
    system("CLS");

    string guessedWord;

    for (int i = 0; i < correctWord.length(); i++)
    {
        guessedWord.append("*");
    }

    cout << guessedWord << endl; 

    while (guessedWord != correctWord) //game loop
    {

        //prompt P2 for a letter
        cout << "Enter a letter that is in that word: " << endl;
        string guessedLetter; 
        cin >> guessedLetter; 

        if (correctWord.find(guessedLetter) != string::npos)
        {
            int foundPosition = correctWord.find(guessedLetter);
            cout << "That letter was in the word at index: " << foundPosition << endl;

            guessedWord.replace(foundPosition, 1, guessedLetter); 
            cout << "The UPDATED mystery word is: " << endl; 
            cout << guessedWord << endl; 
            cout << "\n\n";
            //cin >> guessedLetter;
        }

        else
        {
            cout << "NOT in the word - guess again" << endl; 
            cout << "\n\n";
            //cin >> guessedLetter; 
        }
        
        //IF the letter IS in the word, we perform a REPLACE operation (updating the value of `guessedWord`)
    }

    cout << "You won!" << endl; 

    return 0;
}