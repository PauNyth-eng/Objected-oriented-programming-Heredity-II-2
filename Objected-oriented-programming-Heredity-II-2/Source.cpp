#include "EnumerationQuestion.h"
#include "NumericalQuestion.h"
#include "Question.h"

using namespace std;
int main()
{
	auto questionEnum1 = new EnumerationQuestion("How are you", "Yes");

	list<string> options;
	options.push_back("Good");
	options.push_back("Bad");
	options.push_back("Nice");
	auto questionEnum2 = new EnumerationQuestion("How are you", options, "RIP");

	auto questiionNum = new NumericalQuestion("How old are you?");

	list<Question*> quiz;

	quiz.push_back(questionEnum1);
	quiz.push_back(questionEnum2);
	quiz.push_back(questiionNum);

	for (auto const& question : quiz)
	{
		question->AskQuestion();
		question->GetAnswer();
	}
	exit(EXIT_SUCCESS);
}