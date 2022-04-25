#pragma once
#include "Question.h"
class NumericalQuestion :
    public Question
{
public: 
    NumericalQuestion(string question);
    void AskQuestion();
    void GetAnswer();
};

