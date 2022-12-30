// Author: <Enter name here>
// Email: <Enter email here>
// Section #: <Enter section here>
// Copyright 2021 <Enter Name Here>
// Modified from template code @coleca24 GitHub
#ifndef LOGIN_H_
#define LOGIN_H_
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::string;

const int COLS = 4;
const int ROWS = 5;

// TODO(commit 1): Commit #1 functions
void printUsers(const string data[ROWS][COLS]);
bool readUsers(string fh, string data[ROWS][COLS]);
bool validateOption(char option);
char displayOptions(); 
bool validateOption(char option);
void executeOption(char option, const string data[ROWS][COLS], string);
int searchForUser(string name, const string data[ROWS][COLS]);

// TODO(commit 2): Commit #2 functions
int findAllUsers(string title, const string data[ROWS][COLS]);
bool deleteUser(string name, string data[ROWS][COLS], string fh);
string generatePassword();
string generateEmail(string name);
int checkEmpty(const string data[ROWS][COLS]);
void addUser(int index, string name, string title,
             string data[ROWS][COLS], string fh);

void printUsers(const string data[ROWS][COLS]) {
    std::ifstream in("user_info.csv");
  if(in.is_open()){
    for(int i = 0; i != 5; ++i){
      for(int j = 0; j != 4; ++j){
        in >> data[i][j];
      } cout << data[i][j] << " ";
    }
    in.close();
  } else{
    cout << "File does not exist or did not open\n";
  }
  return cout << "\n";
}
bool readUsers(string fh, string data[ROWS][COLS]) {
  std::ifstream in("user_info.csv");
  if(!doc.is_open())
  {
    return cout << "file doesn't exist";
  }
  for(int i = 0; i!= 5; ++i){
    for(int j = 0; j != 4; ++j){
      cout << data[i][j];
    }
    }
  }
  return false;
}
char displayOptions() {
  cout << "Please choose one of the following options: ";
  cout << "P(or p): Print data";
  cout << "S(or s): Search data by name";
  cout << "F(or f): Find all in data with a certain job title";
  cout << "A(or a): Add a new user";
  cout << "D(or d): Delete an existing user";
  cout << "E(or e): End session";
  return 'e';
}
bool validateOption(char option) {
  cin >> option;
  while(!cin.fail())
  {
    return true;
  }else
   
  return false;
}
void executeOption(char option, string data[ROWS][COLS], string) {
  cin >> option;
  for((option == "P" || "p"){
    std::ifstream in("user_info.csv");
  if(in.is_open()){
    for(int i = 0; i != 5; ++i){
      for(int j = 0; j != 4; ++j){
        in >> data[i][j];
      } cout << data[i][j] << " ";
    }
    in.close();
  }
    for((option == "S" || "s"){
    return searchForUsers();
  return " ";
}
for((option == "F" || "f"){
    return findUsers();
  return " ";
}
for((option == "A" || "a"){
    return addUsers();
  return " ";
}
for((option == "D" || "d"){
    return deleteUsers();
  return " ";
}
for((option == "E" || "e"){
    break;
  return " ";
}

}
int searchForUser(string name, const string data[ROWS][COLS]) {
  cin >> name;
  std::ifstream in("user_info.csv");
  if(!doc.is_open())
  {
    return cout << "file doesn't exist";
  }
  for(int i = 0; i!= 5; ++i)
  {
    for(int j = 0; j != 4; ++j)
    {
      cout << data[i][j];
    }
  }
  
  found = (data[i].name == name);
  if(found)
  {
    cout << data[i].name << endl;
  } else 
  return -1;
}

int findAllUsers(string title, const string data[ROWS][COLS]) {
   cin >> title;
  std::ifstream in("user_info.csv");
  if(!doc.is_open())
  {
    return cout << "file doesn't exist";
  }
  for(int i = 0; i!= 5; ++i)
  {
    for(int j = 0; j != 4; ++j)
    {
      cout << data[i][j];
    }
  }
  
  found = (data[3].title  == title);
  if(found)
  {
    cout << data[3].title << endl;
  } else 
  return -1;
}
bool deleteUser(string name, string data[ROWS][COLS], string fh) {
  cin >> name;
   if(!doc.is_open())
  {
    return cout << "file doesn't exist";
  }
  for(int i = 0; i!= 5; ++i)
  {
    for(int j = 0; j != 4; ++j)
    {
      cout << data[i][j];
    }
  }
  if(data[i] == name)
  {
    i == data[i+1];
  }
  return false;
}
string generatePassword() {
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string number = "0123456789";
  if ((count_alphabet == 6) && (count_number == 1) && (count_ALPHABET == 1))
  {
    srand(time(0));
    cout << "Generated password: ";
    for(int i = 0; i < n; i++)
    cout << generatePassword = rand() % alphabet.length + ALPHABET.length + number.length;
  }
  return "";
}
string generateEmail(string name) {
  cout >> "Enter Name: ";
  cin >> name;
  string newN = "";
  string email = "@email.com";

  if(cin != null)
  {
    newN = name+email;
  }

  return "";
}
int checkEmpty(const string data[ROWS][COLS]) {
  const string data[ROWS][COLS] Empty = null; 
  for(int i = 0; i!= 5; ++i)
  {
    for(int j = 0; j != 4; ++j)
    {
      cout << data[i][j];
    }
  }
  if(data[i] = Empty)
  {
    cout << data[i] << endl;
  } else
  return -1;
}
void addUser(int index, string name, string title,
             string data[ROWS][COLS], string fh) {
               cin >> name;
               cin >> title;
               cin >> index;
   if(!doc.is_open())
  {
    return cout << "file doesn't exist";
  }
  for(int i = 0; i!= 5; ++i)
  {
    for(int j = 0; j != 4; ++j)
    {
      cout << data[i][j];
    }
  }
  if(data[i][j] == name)
  {
    i == data[[i][j]+1];
  }
  if(data[i][j] == title)
  {
    i == data[[i][j]+1];
  }
  if(data[i][j] == index)
  {
    i == data[[i][j]+1];
  }
    return;
}


#endif  // LOGIN_H_
g++ main.cpp -lgtest -lpthread -o login;
./login;