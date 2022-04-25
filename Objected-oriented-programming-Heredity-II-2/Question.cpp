#include "Question.h"


Question::Question(string question)
{
	this->textQuestion = question;
}
Question::Question(string question, string answer)
{
	this->textQuestion = question;
	this->answer = answer;
}

void Question::AskQuestion()
{
	cout << this->textQuestion << endl;

	return;
}

void Question:: GetAnswer()
{
	string s;
	
	cin >> s;

	if (this->answer == s)
	{
		cout << "answer is correct" << endl;
		return;
	}
	cout << "Answer is incorrect, right answer is " << this->answer << endl;
	
	return;
}