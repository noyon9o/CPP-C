#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;

        int participantsInFront = 0;

        if (b > a)
            participantsInFront++;
        if (c > a)
            participantsInFront++;
        if (d > a)
            participantsInFront++;

        std::cout << participantsInFront << std::endl;
    }

    return 0;
}
