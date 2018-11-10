#include <bits/stdc++.h>
using namespace std;
typedef pair<double,double> dd;
dd ERlocations[] = {dd(1.337665316,103.942829562),dd(1.306332108 103.841496634),dd(1.306332108 103.841496634),dd(1.4246346 103.8382084),dd(1.3342547 103.74493),dd(1.2903821718 103.776363561),dd(1.2903821718 103.776363561),dd(1.2738655712 103.833946664),dd(1.3955377 103.8935289),dd(1.3217763 103.8462335)}
const double radius = 6378137;
double distance(double x1, double y1, double x2, double y2){
    return 2*r*arcsin(sqrt(sin((x2-x1)/2.00)*sin((x2-x1)/2.00) + cos(x1)*cos(x2)*sin((y2-y1)/2)*sin((y2-y1)/2));
}
double distance(dd a1, dd a2){
    return distance(a1.first,a1.second,a2.first,a2.second);
}

