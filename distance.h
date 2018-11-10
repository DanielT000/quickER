#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> dd;
dd ERlocations[] = {make_pair(1.337665316,103.942829562),make_pair(1.306332108,103.841496634),make_pair(1.306332108,103.841496634),make_pair(1.4246346,103.8382084)
,make_pair(1.3342547,103.74493),make_pair(1.2903821718,103.776363561),make_pair(1.2903821718,103.776363561),make_pair(1.2738655712,103.833946664),make_pair(1.3955377,103.8935289),make_pair(1.3217763,103.8462335)};
const double radius = 6378.137;
const double pi = 3.1415926535897932384626;
const double travelspeed = 0.861111114;
double tiem(double dist){
    return dist/travelspeed;
}
double distance(double x1, double y1, double x2, double y2){
    return 1.366124295*2*radius*asin(sqrt(sin((x2-x1)*pi/360)*sin((x2-x1)*pi/360) + cos(x1*pi/180)*cos(x2*pi/180)*sin((y2-y1)*pi/360)*sin((y2-y1)*pi/360)));
}
double distance(dd a1, dd a2){
    return distance(a1.first,a1.second,a2.first,a2.second);
}

