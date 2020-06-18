#include <string>
#include <vector>
#include <algorithm>

class Student{
    private:
    // 3 basic value
        vector<string> basic_value_name[4] = {"language", "leadership", "creativity", "problem_solving"};
        vector<double> basic_value[4] = {0};
        vector<Department*> dp = nullptr;
        vector<Equipment*> equip[3] = {new None};
        string name = "X-man";

    public:
        Student(){}
        Student(string s):name(s){}
        ~Student(){}
        virtual vector<double> get_value_vec(){
            return  basic_value;
        }
        int credit[4] = {0, 0, 0, 0};
        // course list
        Course* course_list[18] = {nullptr};
    // add basic_value
        virtual void add_value(vector<double>& vec const){
            for (auto index=vec.begin(); index!=vec.end(); index++){
                basic_value[index] += vec[index];
            }
        }

        virtual vector<Deparment> get_Dept(){return dp;}

        virtual void Change_Dept(Department* d, Department* d_c){
            if (find(dp.begin(); dp.end(); d_c)) != dp.end(){
                find(dp.begin(); dp.end; d_c) = d;
            }
            else
                cout << "404 Error" << std::endl;
        }
        virtual void Add_Dept(Department* d){
            if (find(dp.begin(); dp.end(); d_c)) != dp.end(){
                cout << "404 Error" << std::endl;
            }
            else
                dp.push_back(d);
        }
        virtual void Drop_Dept(Department* d){
            if (find(dp.begin(); dp.end; d_c)) != dp.end(){
                find(dp.begin(); dp.end; d_c) = nullptr;
            }
            else
                cout << "404 Error" << std::endl;
        }

        virtual vector<Equipment*> get_equip() const {return equip;}

        virtual void first_pick(Equipment* eq1, Equipment* eq2, Equipment eq3){
            equip[0] = eq1;
            equip[1] = eq2;
            equip[2] = eq3;
        }
        
        virtual void change_equip(Equipment* eq, int index){

            if (find(vec.begin(); vec.end; eq)) != vec.end(){ 
                equip[index] = eq;
                for (auto i=equip.begin(); i!=equip.end; i++){
                    basic_value[i] += (eq->getStats)[i];
                }
            }
            else
            {
                    cout << "404 Error" << std::endl;
            }
            
        }

        virtual void show_current_eqip(){
            for (auto index=equip.begin(); index!=equip.end(); ++index){
                cout << equip[index]->getName() << std::endl;
            }
        }
        virtual void show_current_Dept(){
            for (auto index=dp.begin(); index!=dp.end(); ++index){
                cout << dp[index]->getName() << std::endl;
            }
        }
};



