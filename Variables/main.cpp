#include <iostream>

using namespace std;

// This program will calculate the area of a room in sq-ft

int get_area(int x, int y){
  return x * y;
}

int main(){
  int length_room {1};
  int width_room {1};
  int area {1};

  cout << "*** ROOM AREA CALCULATOR ***" << endl;
  cout << "What is the Width? " << endl;
  cin >> width_room;
  cout << "What is the Length?" << endl;
  cin >> length_room;
  area = get_area(length_room, width_room);
  cout << "The area of the room is: " << area << " sq-ft!";


  return 0;
}
