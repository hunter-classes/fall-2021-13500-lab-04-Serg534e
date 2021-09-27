#include <iostream>
#include "shapes.h"

std::string print_box(int H, int W){
  std:: string box;
  for(int i = 0; i<W; i++){
    box+="\n";
    for(int j = 0; j < H ; j++){
      box+="*";
    }
  }
  box+="\n";
  return box;
}
std::string checker_board(int H, int W){
  std:: string checkerBoard;
  for(int i = 0; i < W; i++){
    checkerBoard+="\n";
    for(int j = 0; j<H; j++){
      if(j%2== i%2){
        checkerBoard+="*";
      }
      else{
        checkerBoard+=" ";
      }
    }
  }
  checkerBoard+="\n";
  return checkerBoard;
}
std:: string cross(int S){
  std:: string cross1;
  for(int i = 0 ; i<S; i++){
    for(int j = 0; j<S; j++){
      if(i==j || i+j==S-1){
        cross1+="*";
      }
      else{
        cross1+=" ";
      }
    }
    cross1+="\n";
  }
  cross1+="\n";
  return cross1;
}
std:: string lowerT(int L){
  std:: string lower;
  for(int i = 0; i < L; i++){
    for(int j = 0; j< L; j++){
      if(i>=j){
        lower+="*";
      }
      else{
        lower+" ";
      }
    }
    lower+="\n";
  }
  return lower;
}
std:: string upperT(int L){
  std:: string upper;
  for(int i = 0; i<L; i++){
    for(int j = 0; j<L; j++){
      if(j>=i){
        upper+="*";
      }
      else
        upper+=" ";
    }
    upper+="\n";
  }
  return upper;
}

std:: string trapezoid(int W, int H){
  std:: string zoid;
  std:: string error;
  error = "Impossible shape \n";
  int spaces = 0;
  int stars = W;
  for(int i = 0; i < H; i++){
    for(int j = 0; j<spaces; j++){
      zoid+=" ";
    }
    for(int j = 0; j<stars; j++){
      zoid+="*";
    }
    if(stars<1){
      return error;
    }
    spaces+=1;
    stars-=2;
    zoid+="\n";
  }
  return zoid;
}

std:: string checker3x3(int W, int H){
  std:: string checkT;
  for(int i = 0; i < H; i++){
    for(int j=0; j< W; j++){
      if((j/3)%2 == (i/3)%2){
        checkT+="*";
      }
      else{
        checkT+=" ";
      }
    }
    checkT+="\n";
  }
  return checkT;
}
