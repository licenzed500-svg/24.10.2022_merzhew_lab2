#include <iostream>
#include <time.h>

struct user_nums
{
  short task_number = 0;
  float y = 0;
  float x = 0;
};


user_nums _task_get_num_x(user_nums some_num)
{
    std::cout << "enter x:";
    std::cin >> some_num.x;
    std::cout << "\n";
    system("cls");
    return some_num;
}


user_nums _task34_action(user_nums some_num)
{
    if(some_num.x < 10)
    {
        some_num.y = 5;
    }
    else if(some_num.x>=10 && some_num.x<=40)
    {
        some_num.y = 0;
    }

    else if(some_num.x>40)
    {
        some_num.y = -5;
    }
    else
    {
        //
    }
    return some_num;
}


user_nums _task35_action(user_nums some_num)
{
    if(some_num.x < 0)
    {
        some_num.y = 1;
    }
    else if(some_num.x>=0 && some_num.x<30)
    {
        some_num.y = 0;
    }
    else if (some_num.x>=30)
    {
        some_num.y = -1;
    }
    else
    {
        //
    }
    return some_num;
}


user_nums _task36_action(user_nums some_num)
{
    if(some_num.x < 10)
    {
        some_num.y = 5;
    }
    else if(some_num.x>=10 && some_num.x<=30)
    {
        some_num.y = 0;
    }
    else if(some_num.x>30 && some_num.x<=40)
    {
        some_num.y = -5;
    }
    else if(some_num.x>=40)
    {
        some_num.y = 10;
    }
    else
    {
        //
    }
    return some_num;
}


void task_data_out(user_nums some_num)
{
    system("cls");
    std::cout << "task number is:" << some_num.task_number << "\n";
    std::cout << "x is:" << some_num.x << "\n";
    std::cout << "y is:" << some_num.y << "\n\n\n";

}



int main()
{

   user_nums user_num_task34;
   user_num_task34.task_number = 34;
   user_nums user_num_task35;
   user_num_task35.task_number = 35;
   user_nums user_num_task36;
   user_num_task36.task_number = 36;



   user_num_task36 = _task_get_num_x(user_num_task36);
   user_num_task36 = _task36_action(user_num_task36);
   task_data_out(user_num_task36);

   user_num_task35 = _task_get_num_x(user_num_task35);
   user_num_task35 = _task35_action(user_num_task35);
   task_data_out(user_num_task35);

   user_num_task34 = _task_get_num_x(user_num_task34);
   user_num_task34 = _task35_action(user_num_task34);
   task_data_out(user_num_task34);




   return 0;
}
