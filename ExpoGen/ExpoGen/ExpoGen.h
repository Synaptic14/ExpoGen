#define ExpoGen_h

void greetMessage();
void runGenerator();
int getBaseNumber();
int getExponent();
void generateList(int base, int exp);
bool isPlayingAgain();

namespace expoConstants
{
	constexpr double exponent = 1.1;
}
