#include <bits/stdc++.h>
using namespace std;
#define int long long

pair<string, string> convertTime(string t)
{

    int hour = 0, minute = 0;
    for (int i = 0; i < 2; ++i)
    {
        hour = hour * 10 + (t[i] - '0');
    }
    for (int i = 3; i < 5; ++i)
    {
        minute = minute * 10 + (t[i] - '0');
    }

    string ampm;
    if (hour >= 12)
    {
        ampm = "PM";
        if (hour > 12)
            hour -= 12;
    }
    else
    {
        ampm = "AM";
        if (hour == 0)
            hour = 12;
    }
    return {(hour < 10 ? "0" + to_string(hour) : to_string(hour)) + ":" + (minute < 10 ? "0" + to_string(minute) : to_string(minute)), ampm};
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string time;
        cin >> time;
        auto convertedTime = convertTime(time);
        cout << convertedTime.first << " " << convertedTime.second << endl;
    }
    return 0;
}
