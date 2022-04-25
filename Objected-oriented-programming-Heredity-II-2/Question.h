#pragma once
#include <string>
#include <iostream>

using namespace std;
class Question
{
protected:
	string answer;
	string textQuestion;
public:
	Question(string question);
	Question(string question, string answer);
	virtual void AskQuestion();
	virtual void GetAnswer();
};

