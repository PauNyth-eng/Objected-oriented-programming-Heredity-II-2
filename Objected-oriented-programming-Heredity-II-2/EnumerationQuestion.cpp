#include "EnumerationQuestion.h"


EnumerationQuestion::EnumerationQuestion(string question, string answer) : Question(question, answer)
{
	this->answerOptions.push_back(answer);
}

EnumerationQuestion::EnumerationQuestion(string question, string* options, int numberOfOptions, string answer) : Question(question, answer)
{

	for (int i = 0; i < numberOfOptions; i++)
	{
		this->answerOptions.push_back(options[i]);
	}
	this->answerOptions.push_back(answer);
}

EnumerationQuestion::EnumerationQuestion(string question, list<string> options, string answer) : Question(question, answer)
{
	this->answerOptions = options;
	this->answerOptions.push_back(answer);
}

void EnumerationQuestion::AskQuestion()
{
	cout << textQuestion << endl;

	for (auto const& option : this->answerOptions)
	{
		cout << option << endl;
	}
	return;
}

void EnumerationQuestion::GetAnswer()
{
	string s; 
	bool isThere = false;
	cin >> s;

	for (auto const& option : this->answerOptions)
	{
		if (option.compare(s) == 0)
		{
			isThere = true;
		}
	}
	if (!isThere)
	{
		cout << "answer question again." << endl;
		this->AskQuestion();
		this->GetAnswer();
	}

	if (this->answer.compare(s) == 0)
	{
		cout << "You answered correctly." << endl;
	}
	return;
}
	