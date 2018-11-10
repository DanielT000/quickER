#include <bits/stdc++.h>
#include <time.h>
//#include "distance.h"
#include "greeting.h"
using namespace std;
string ERS[11] = {"24h Time", "CGH", "KKHC", "KKHW", "KTPH", "NTFH", "NUH",	"NUHC",	"SGH", "SKGH", "TTSH"};
	string times[49] = {"00 00", "00 30", "01 00", "01 30", "02 00", "02 30", "03 00", "03 30", "04 00", "04 30", "05 00", "05 30", "06 00", "06 30", "07 00", "07 30", "08 00",
	"08 30", "09 00", "09 30", "10 00", "10 30", "11 00", "11 30", "12 00", "12 30", "13 00", "13 30", "14 00", "14 30", "15 00", "15 30", "16 00", "16 30", 
	"17 00", "17 30", "18 00", "18 30", "19 00", "19 30", "20 00", "20 30", "21 00", "21 30", "22 00", "22 30", "23 00", "23 30", "24 00"};
    int data[48][10] = {{150, 60, 20, 70, 70, 110, 60, 150, 50, 110}, {120, 50,	20, 70,	60, 110, 60, 150, 50, 120}, {100, 40, 15, 80, 80, 100, 80, 180,	40, 100},
                        {90, 30, 10, 80, 70, 90, 70, 120, 40, 100}, {80, 20, 5,	60, 60,	90, 60,	120, 30, 80}, {80, 15, 5, 50, 40, 80, 50, 40, 30, 60},
                        {70, 10, 5, 40,	30, 60,	40, 30,	20, 50}, {60, 5, 0, 30,	30, 60,	30, 20,	20, 30}, {50, 5, 0, 25,	30, 50,	30, 10,	20, 30}, 
                        {40, 5,	5, 20, 20, 30, 20, 20, 20, 30}, {30, 10, 5, 20,	10, 30,	10, 20,	30, 50}, {30, 15, 10, 30, 20, 20, 10, 25, 30, 50}, 
                        {20, 30, 15, 30, 30, 20, 20, 30, 30, 40}, {20, 40, 20, 40, 30, 20, 30, 35, 30, 30}, {30, 50, 20, 30, 40, 30, 40, 40, 30, 30}, 
                        {40, 50, 30, 20, 20, 40, 30, 45, 40, 40}, {30, 60, 30, 20, 20, 40, 20, 30, 40, 40}, {20, 60, 40, 20, 20, 40, 20, 30, 50, 40},
						{20, 50, 30, 30, 30, 20, 30, 30, 30, 60}, {20, 40, 30, 40, 40, 20, 40, 20, 30, 60}, {15, 30, 10, 30, 40, 15, 50, 20, 20, 30},
						{15, 20, 10, 30, 50, 15, 50, 15, 10, 30}, {20, 20, 20, 30, 40, 20, 60, 15, 10, 20}, {30, 30, 20, 30, 30, 30, 60, 20, 20, 20},
						{30, 40, 30, 20, 30, 30, 60, 30, 40, 20}, {30, 50, 30, 20, 30, 40, 80, 40, 40, 30}, {20, 60, 40, 30, 20, 30, 70, 40, 40, 30},
						{20, 70, 30, 30, 20, 20, 50, 50, 60, 20}, {20, 80, 20, 20, 20, 120, 30, 260, 50, 20}, {30, 60, 10, 15, 15, 120, 20, 260, 40, 20},
						{30, 60, 5, 15, 20, 130, 20, 230, 20, 30}, {30, 60, 20, 15, 15, 130, 20, 230, 20, 30}, {40, 70, 20, 30, 30, 140, 30, 240, 20, 35},
						{70, 80, 20, 40, 40, 160, 40, 260, 30, 50}, {80, 90, 30, 60, 50, 170, 60, 270, 40, 60}, {90, 100, 40, 70, 60, 180, 60, 280, 50, 60},
						{100, 100, 60, 80, 70, 80, 60, 100, 50, 70}, {90, 100, 60, 90, 80, 90, 70, 100, 60, 90}, {120, 110, 60, 100, 90, 100, 80, 120, 60, 100},
						{120, 120, 70, 100, 100, 100, 90, 120, 70, 140}, {140, 150, 70, 120, 110, 120, 90, 130, 60, 150}, {140, 150, 70, 120, 100, 130, 100, 140, 70, 150},
						{150, 180, 80, 100, 100, 150, 100, 140, 80, 160}, {160, 180, 80, 100, 80, 160, 90, 180, 70, 180}, {180, 160, 60, 90, 70, 180, 80, 190, 70, 200}, 
						{200, 160, 50, 80, 80, 180, 70, 200, 60, 180}, {180, 150, 40, 80, 60, 150, 60, 180, 50, 180}, {160, 150, 30, 70, 80, 120, 60, 180, 40, 160}};		
const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d %X", &tstruct);
    return buf;
}
int main()
{
	greeting();
	const string curr_time = currentDateTime();
    cout<<"\n\n   The date and time now is: "<<curr_time<< "\n";
    string time = "";
    int i;
    int ans;
    for(i = 11; i < 16; i++)
    {
    	time += curr_time[i];
	}
	string min = "";
	min += time[3];
	min += time[4];
	for(i = 0; i < 48; i++)
	{
		if(times[i] <= time  and time <= times[i + 1])
		{
			if(times[i + 1][3] == '3' and times[i][3] == '0')
			{
				if(min >= "15")
					ans = i + 1;
				else
					ans = i;
			}
			else
			{
				if(min >= "45")
					ans = i + 1;
				else
					ans = i;
			}
			break;
		}
    }
  	cout << "The timing now is " << times[ans] << " and the waiting times for the hospitals are:\n" ;
	for (int i = 0; i < 10; i++){
		cout << setw(5) << ERS[i] << setw(2) << ": " << setw(10) << data[ans][i] << '\n';
	}
