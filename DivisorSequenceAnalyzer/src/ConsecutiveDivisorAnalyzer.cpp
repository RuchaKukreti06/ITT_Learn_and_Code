#include "ConsecutiveDivisorAnalyzer.h"

#include "constants.h"

int ConsecutiveDivisorAnalyzer::getDivisorCount(int number) const
{
    if (number <= 0)
    {
        return 0;
    }

    int divisorCount = 0;

    for (int divisorCandidate = 1; divisorCandidate * divisorCandidate <= number;
         ++divisorCandidate)
    {
        if (number % divisorCandidate == 0)
        {
            if (divisorCandidate * divisorCandidate == number)
            {
                divisorCount += 1;
            }
            else
            {
                divisorCount += DIVISOR_PAIR_COUNT;
            }
        }
    }

    return divisorCount;
}

int ConsecutiveDivisorAnalyzer::countNumbersWithEqualAdjacentDivisors(int upperLimit) const
{
    if (upperLimit <= LOWER_BOUND)
    {
        return 0;
    }

    int validPairCount = 0;

    for (int currentNumber = LOWER_BOUND; currentNumber < upperLimit; ++currentNumber)
    {
        int currentDivisorCount = getDivisorCount(currentNumber);
        int nextDivisorCount = getDivisorCount(currentNumber + 1);

        if (currentDivisorCount == nextDivisorCount)
        {
            validPairCount += 1;
        }
    }

    return validPairCount;
}