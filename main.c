#include <stdio.h>

int motors() {
  int motorInput;
  printf("Enter the number of motors to carry the packages: ");
  scanf("%d", &motorInput);
  return motorInput;
}

float mass() {
  float massInput;
  printf("Enter the total mass of packages in kg: ");
  scanf("%f", &massInput);
  return massInput;
}

int main() {
  float capacityPerMotor = 5.6;
  float totalCapacity = motors() * capacityPerMotor;
  if (mass() <= totalCapacity) {
    printf("Yes! The conveyor belt can carry the packages.\n");
  } else {
    printf("No. The conveyor belt cannot carry the packages.\n");
  }
  return 0;
}