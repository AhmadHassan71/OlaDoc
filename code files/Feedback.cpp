//
// Created by Ahmad on 6/4/2022.
//

#include "Feedback.h"


using namespace std;

void Feedback::setFeedback(string fb)
{
	strcpy_s(feedback, fb.c_str());
}

void Feedback::setRating(int& rate)
{
	rating = rate;
}

string Feedback::getFeedback()
{
	return feedback;
}