class Equipment{
public:
  virtual ~Equipment(){}
  virtual int getIndex() const = 0;
  virtual string getName() const = 0;
  virtual vector<double> getStats() const = 0;
};

class None : public Equipement{
  int index = 0;
  string name = "None";
  vector<double> stats = {0,0,0,0};
public:
  virtual ~None(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class KoreanFish : public Equipement{
  int index = 1;
  string name = "Korean Fish";
  vector<double> stats = {5,5,5,-10};
public:
  virtual ~KoreanFish(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class AlbertSmile : public Equipement{
  int index = 2;
  string name = "Albert's Smile";
  vector<double> stats = {10,10,10,10};
public:
  virtual ~AlbertSmile(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class Heron : public Equipement{
  int index = 3;
  string name = "Malayan Night Heron";
  vector<double> stats = {0,0,0,0};
public:
  virtual ~Heron(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class Basketball : public Equipement{
  int index = 4;
  string name = "Basketball";
  vector<double> stats = {2,7,2,2};
public:
  virtual ~Basketball(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class IPhone : public Equipement{
  int index = 5;
  string name = "IPhone";
  vector<double> stats = {8,2,5,8};
public:
  virtual ~IPhone(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class Calculator : public Equipement{
   int index = 6;
  string name = "Calculator";
  vector<double> stats = {0,0,5,8};
public:
  virtual ~Calculator(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};


class Dictionary : public Equipement{
  int index = 7;
  string name = "Dictionary";
  vector<double> stats = {10,5,0,5};
public:
  virtual ~Dictionary(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};


class Money: public Equipement{
  int index = 8;
  string name = "Money";
  vector<double> stats = {0,8,10,10};
public:
  virtual ~Money(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};


class Bike: public Equipement{
  int index = 9;
  string name = "Bike";
  vector<double> stats = {2,5,5,5};
public:
  virtual ~Bike(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class Lover: public Equipement{
  int index = 10;
  string name = "Lover";
  vector<double> stats = {-10,-10,-10,-10};
public:
  virtual ~Lover(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};


class Cigarette: public Equipement{
  int index = 11;
  string name = "Cigarette";
  vector<double> stats = {-5,2,2,2};
public:
  virtual ~Cigarette(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class Ipod: public Equipement{
  int index = 12;
  string name = "Ipod";
  vector<double> stats = {8,0,2,0};
public:
  virtual ~Ipod(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};


class NtuMilk: public Equipement{
  int index = 13;
  string name = "Ntu Milk";
  vector<double> stats = {0,0,2,2};
public:
  virtual ~NtuMilk(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class AirJordan: public Equipement{
  int index = 14;
  string name = "Air Jordan 1";
  vector<double> stats = {0,10,0,0};
public:
  virtual ~AirJordan(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};

class ErrandBoy : public Equipement{
  int index = 15;
  string name = "Errand Boy";
  vector<double> stats = {0,0,-5,10};
public:
  virtual ~ErrandBoy(){}
  virtual string getIndex() {return index;}
  virtual string getName() {return name;}
  virtual vector<double> getStats(){return stats;}
};
