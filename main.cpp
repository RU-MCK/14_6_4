#include <iostream>
#include "iomanip"
#include "vector"
using namespace std;

void array_fill(float array[][4]) {
  float n;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> n;
      array[i][j] = n;
    }
  }
}
vector<float> vector_fill(vector<float> vec) {
  float n;
  for (int i = 0; i < 4; i++) {
    cin >> n;
    vec[i] = n;
  }
  return vec;
}
vector<float> multiplication_vector(vector<float> vec, float array[][4]) {
  float sum = 0;
  vector<float> new_vec(4);
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      sum += array[i][j] * vec[i];
    }
    new_vec[i] = sum;
    sum = 0;
  }
  return new_vec;
}
void print_vector(vector<float> vec) {
  for (int i = 0; i < 4; i++) {
    cout << setw(4) << vec[i];
  }
}
int main() {
  vector<float> vecA(4);
  float array[4][4];
  cout << " Fill vector: " << endl;
  vecA = vector_fill(vecA);
  cout << "Fill two-dimensional array: " << endl;
  array_fill(array);
  vector<float> vecB(4);
  vecB = multiplication_vector(vecA, array);
  print_vector(vecB);
}
