#include <iostream>
#include <array>
#include <algorithm>
#include <string>
#include <numeric>
#include <list>
#include <map>
#include <iterator>
#include <set>
#include <vector>
#include <cassert>

// states
enum class State
{
	Play,
	Pause,
	Stop
};

// array of stings for printing states
//std::array<std::string, 3> stateStrings = {"Play", "Pause", "Stop"};

// Map to store valid transitions
// 												   {State,       {     valid transitions   }}
std::map<State, std::vector<State>> transitions = {{State::Play, {State::Pause, State::Stop}},
												   {State::Pause, {State::Play, State::Stop}},
												   {State::Stop, {State::Play}}};

bool ChangeState(State currentState, State nextState)
{
	// search for nextState in the vector of valid transitions for currentState in the map
	if (std::find(transitions[currentState].begin(), transitions[currentState].end(), nextState) !=
		transitions[currentState].end())
	{
		return true;
	}
	return false;
}

void test_transitions()
{
	// Play -> Pause & Play -> Stop
	State currentState = State::Play;
	State nextState = State::Pause;
	assert(ChangeState(currentState, nextState) == true);
	nextState = State::Stop;
	assert(ChangeState(currentState, nextState) == true);

	// Pause -> Play & Pause -> Stop
	currentState = State::Pause;
	nextState = State::Play;
	assert(ChangeState(currentState, nextState) == true);
	nextState = State::Stop;
	assert(ChangeState(currentState, nextState) == true);

	// Stop -> Play
	currentState = State::Stop;
	nextState = State::Play;
	assert(ChangeState(currentState, nextState) == true);

	// testing invalid transitions
	currentState = State::Play;
	nextState = State::Play;
	assert(ChangeState(currentState, nextState) == false);

	currentState = State::Pause;
	nextState = State::Pause;
	assert(ChangeState(currentState, nextState) == false);

	currentState = State::Stop;
	nextState = State::Stop;
	assert(ChangeState(currentState, nextState) == false);

	currentState = State::Stop;
	nextState = State::Pause;
	assert(ChangeState(currentState, nextState) == false);

	std::cout << "===== All tests passed =====\n";
}

int main()
{
	test_transitions();
	State currentState = State::Stop;

	while (true)
	{
		std::cout << "Current state: ";
		switch (currentState)
		{
			case State::Play:
				std::cout << "\n====================\n";
				std::cout << "Play\n";
				std::cout << "====================\n";
				break;
			case State::Pause:
				std::cout << "\n====================\n";
				std::cout << "Pause\n";
				std::cout << "====================\n";
				break;
			case State::Stop:
				std::cout << "\n====================\n";
				std::cout << "Stop\n";
				std::cout << "====================\n";
				break;
		}

		int input;
		std::cout << "Enter command:\n";
		std::cout << "1. Play\n";
		std::cout << "2. Pause\n";
		std::cout << "3. Stop\n";
		std::cin >> input;

		// Check if input is valid and transition to the next state
		if (input >= 1 && input <= 3)
		{
			State nextState;
			switch (input)
			{
				case 1:
					nextState = State::Play;
					break;
				case 2:
					nextState = State::Pause;
					break;
				case 3:
					nextState = State::Stop;
					break;
			}

			if (ChangeState(currentState, nextState))
			{
				// valid
				currentState = nextState;
			}
			else
			{
				perror("+++++++++ Invalid transition +++++++++");
			}
		}
		else
		{
			perror("+++++++++ Invalid input +++++++++");
		}
	}

	return 0;
}