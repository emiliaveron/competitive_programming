#include <string>
#include <iostream>
using namespace std;

string triangle(string row_str){
  string new_row = row_str;
  int i;
  while (row_str.length() != 1){
    for (i = 0; i+1 < row_str.length(); i++){
      if (row_str[i] == row_str[i+1]) new_row[i] = row_str[i];
      else if ((row_str[i] == 'R' && row_str[i+1] == 'G') || (row_str[i] == 'G' && row_str[i+1] == 'R')) new_row[i] = 'B';
      else if ((row_str[i] == 'B' && row_str[i+1] == 'G') || (row_str[i] == 'G' && row_str[i+1] == 'B')) new_row[i] = 'R';
      else if ((row_str[i] == 'R' && row_str[i+1] == 'B') || (row_str[i] == 'B' && row_str[i+1] == 'R')) new_row[i] = 'G';
    }
    row_str = new_row;
    row_str.resize(i);
  } 
  return row_str;
}

int main(){
  cout<<triangle("GR")<<endl;
  cout<<triangle("RRR")<<endl;
  cout<<triangle("RGBGR")<<endl;
}