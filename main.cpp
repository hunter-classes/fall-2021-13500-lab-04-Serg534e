#include <iostream>
#include "shapes.h"

int main(){
  std::cout<<"box(7,4) Width = 7 Height = 4  \n";
  std:: string box1;
  box1 = print_box(7,4);
  std::cout<< box1;
  std::cout<<"-------------------------- \n";
  std::cout<<"box(3,8) \n";
  std:: string box2;
  box2= print_box(3,8);
  std::cout<< box2;
  std::cout<<"-------------------------- \n";
  std::cout<<"checkerboard(11,5) Width = 11 Height = 5 \n";
  std:: string checkBoard1;
  checkBoard1 =checker_board(11,5);
  std::cout<< checkBoard1;
  std::cout<<"-------------------------- \n";
  std::cout<<"checkerboard(9,4) Width = 9 Height = 4 \n";
  std:: string checkBoard2;
  checkBoard2 = checker_board(9,4);
  std::cout<< checkBoard2;

  std::cout<<"-------------------------- \n";
  std:: cout<<"cross(8) \n";
  std:: string cross1;
  cross1=cross(8);
  std::cout<<cross1;
  std::cout<<"-------------------------- \n";
  std:: cout<<"cross(11) \n";
  std:: string cross2;
  cross2= cross(11);
  std::cout<<cross2;

  std::cout<<"-------------------------- \n";
  std::cout<<"lowerT(6): \n";
  std:: string lowerT1;
  lowerT1 = lowerT(6);
  std:: cout<<lowerT1;
  std::cout<<"-------------------------- \n";
  std::cout<<"lowerT(10): \n";
  std:: string lowerT2;
  lowerT2 = lowerT(10);
  std:: cout<<lowerT2;
  std::cout<<"-------------------------- \n";
  std::cout<<"upperT(6) \n";
  std:: string upperT1;
  upperT1=upperT(6);
  std::cout<<upperT1;
  std::cout<<"-------------------------- \n";
  std::cout<<"upperT(3) \n";
  std:: string upperT2;
  upperT2=upperT(3);
  std::cout<<upperT2;
  std::cout<<"-------------------------- \n";
  std::cout<<"trapezoid(12,5) (Possible shape): \n";
  std:: string trapezoid11;
  trapezoid11 = trapezoid(12,5);
  std:: cout<<trapezoid11;
  std::cout<<"-------------------------- \n";
  std::cout<<"trapezoid(12,6) (Possible shape): \n";
  std:: string trapezoid1;
  trapezoid1 = trapezoid(12,6);
  std:: cout<<trapezoid1;
  std::cout<<"-------------------------- \n";
  std::cout<<"trapezoid(12,7) (Impossible shape): \n";
  std:: string trapezoid2;
  trapezoid2 = trapezoid(12,7);
  std:: cout<<trapezoid2;
  std::cout<<"-------------------------- \n";
  std::cout<<"checker3x3(16,11):\n";
  std:: string checker3x31 = checker3x3(16,11);
  std::cout<<checker3x31;
  std::cout<<"-------------------------- \n";
  std::cout<<"checker3x3(15,15):\n";
  std:: string checker3x32 = checker3x3(15,15);
  std::cout<<checker3x32;
}
