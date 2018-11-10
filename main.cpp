#include <bits/stdc++.h>
#include <time.h>
#include "distance.h"
#include "greeting.h"
#include <conio.h>
using namespace std;
typedef pair<double,int> di;
const string currentDateTime() {
    time_t now = time(0);
    struct tm  tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d %X", &tstruct);
    return buf;
}
int main(){
	greeting();
	const string curr_time = currentDateTime();
    cout<<"\n\nThe date and time now is: "<<curr_time<< "\n";
    string time = "";
    time += curr_time[11];
    time += curr_time[12];
    time += " ";
    time += curr_time[14];
    time += curr_time[15];
    cout << time << '\n';
    int ans = upper_bound(times,times+48,time) - times - 1;
  	cout << "\nThe waiting times for the hospitals are:\n" ;
  	priority_queue<di,vector<di>,greater<di> > pq;
	for (int i = 0; i < 10; i++){
        pq.push(di(data[ans][i],i));
	}
	for (int i = 0; i < 10; i++){
        di pqq = pq.top(); pq.pop();
        int foo = pqq.first, bar =pqq.second;
        cout << setw(5) << ERS[bar] << setw(2) << ": " <<setw(10) << foo << '\n';
 	}
	cout << "\nPlease enter your coordinates to continue: \n";
	double lat, lon;
	cin >> lat >> lon;
	dd cur = dd(lat,lon);
	for (int i = 0; i < 10; i++){
        pq.push(di(tiem(distance(cur,ERlocations[i]))+(double)data[ans][i],i));
	}
	while (!pq.empty()){
        di pqq = pq.top(); pq.pop();
        int foo = pqq.first, bar = pqq.second;
        cout << "Total time to receive treatment at "<< ERS[bar] << " will take " << foo << " minutes\n";
	}
}
