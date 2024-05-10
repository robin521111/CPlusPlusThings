/**
 * @file enum_copy.cpp
 * @author Robin Lu
 * @brief  
 * @version 0.1
 * @date 2024-05-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

enum weekday {s, m, t, w, thu, f, s1};
int main(int argc, char const argv[]){
  enum weekday wek = s;
  //weekday wek = s 

  for (int i = wek; i !=f; i ++)
  {
    cout << i << endl;
    cout << wek + s << endl;
    cout << "----------测试--------------" << endl;
  }
  return 0;
  
}