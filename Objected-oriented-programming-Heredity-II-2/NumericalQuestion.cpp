#include "NumericalQuestion.h"


NumericalQuestion::NumericalQuestion(string question) : Question(question)
{

}

void NumericalQuestion::AskQuestion()
{
	Question::AskQuestion();
}

void NumericalQuestion::GetAnswer() {
    string ans;
    cin >> ans;
    int inAns = stoi(ans);

    if (inAns >= 0)
    {
        cout << "Answer is correct!" << endl;
        this->answer = ans;
    }
    else
    {
        cout << "Answer is incorrect!" << endl;
    }
}