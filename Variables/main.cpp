#include <iostream>

using namespace std;

// This program will calculate the area of a room in sq-ft

int get_area(int x, int y){
  return x * y;
}

int main(){
  int length_room {0};
  int width_room {0};
  int area {0};

  cout << "*** ROOM AREA CALCULATOR ***" << endl;
  cout << "Enter the width of the room: " << endl;
  cin >> width_room;
  cout << "Enter the length of the room: " << endl;
  cin >> length_room;
  area = get_area(length_room, width_room);
  cout << "The area of the room is: " << area << " sq-ft!";


  return 0;
}
