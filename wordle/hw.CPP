// Your First C++ Program

#include <iostream>

using namespace std;

// Get word of the day
string getWord(string word)
{
  return word;
}

// Get User word
string getGuess()
{
  string guess;
  cout << ": What is your guess? ";
  cin >> guess;
  while (guess.length() != 5)
  {
    cout << "Guess a better word you potato!";
    cin >> guess;
  }
  return guess;
}

// Compare each letter to each letter in word of the day
bool compareTwoCharVal(char a, char b)
{
  if (a == b)
  {
    return true;
  }
  return false;
}

// Compare location of letters in array
bool compareTwoCharLocation(int a, int b)
{
  if (a == b)
  {
    return true;
  }
  return false;
  // a == b ? true : false;
}

bool foundCharElsewhere() {
  
}
int main()
{
  string word = "aidan";
  int len = word.length();
  string guess;
  string guess_output = "";

  while (guess != word)
  {
    guess_output = "";
    guess = getGuess();

    // store char from guess
    for (int i = 0; i < len; i++)
    {
      char guess_char = guess[i];
      // compare guess char with location and value of each char in word
      for (int j = 0; j < len; j++)
      {
        char word_char = word[j];
        bool is_same_value = compareTwoCharVal(guess_char, word_char);
        bool is_same_location = compareTwoCharLocation(guess_char, word_char);

        if (is_same_value)
        {
          if (i == j)
          {
            guess_output.push_back(guess_char);
            break;
          }
          else
          {
            guess_output.push_back(toupper(guess_char));
            break;
          }
        }
        else if (j == len - 1)
        {
          guess_output.push_back('#');
        }
      }
    }

    cout << guess_output;
  }

  return 0;
}