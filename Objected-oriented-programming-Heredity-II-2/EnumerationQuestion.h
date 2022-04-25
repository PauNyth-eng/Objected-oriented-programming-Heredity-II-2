#pragma once
#include "Question.h"
#include <list>

class EnumerationQuestion :
    public Question
{
private:
    list<string> answerOptions;

public:
    EnumerationQuestion(string question, string answer);
    EnumerationQuestion(string question, string* options, int numberOfOptions, string answer);
    EnumerationQuestion(string question, list<string> options, string answer);
    void AskQuestion();
    void GetAnswer();
};

