#include <iostream>

struct student {
  char *name;
  char *familyName;
  int age;
  int CIN;
};

void createStudent(student &);
void printStudent(const student &);
bool equalS(const student &, const student &);

int main(int argc, char *argv[]) {

  student random, chad;
  createStudent(random);
  createStudent(chad);
  std::cout << "random:" << std::endl;
  printStudent(random);
  std::cout << "chad:" << std::endl;
  printStudent(chad);
  if (equalS(random,chad)) {
    std::cout << "same person" << std::endl;
  } else {
    std::cout << "same person not" << std::endl;
  }

  return 0;
}

void createStudent(student &random) {

  random.name = new char[50];
  random.familyName = new char[50];
  std::cout << "name = ";
  std::cin >> random.name;
  std::cout << "familyName = ";
  std::cin >> random.familyName;
  std::cout << "age = ";
  std::cin >> random.age;
  std::cout << "CIN = ";
  std::cin >> random.CIN;
}

void printStudent(const student &random) {

  std::cout << "name : " << random.name << std::endl;
  std::cout << "familyName : " << random.familyName << std::endl;
  std::cout << "age : " << random.age << std::endl;
  std::cout << "CIN : " << random.CIN << std::endl;
}

bool equalS(const student &random, const student &chad) {

  if (random.name != chad.name || random.familyName != chad.familyName ||
      random.age != chad.age || random.CIN != chad.CIN) {
    return false;
  } else {
    return true;
  }
}
