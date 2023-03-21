#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int errorLog (const char* file, const std::string& msg){
   cerr << "[" << file << "] " << msg << endl;
}
#define LOG( msg ) errorLog( __FILE__, msg )
main() {
   LOG("This is a dummy error");
}
