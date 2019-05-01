#include <kipr/botball.h>
#include"move.h"

void set_up()
{
    //servo positions
    enable_servos();
    msleep(200);

    //opening claw to touch
    touch();
    msleep(1000);

    //mini tail up to fit in box
    set_servo_position(mini,1905);
    msleep(200);

    msleep(900); //wait



    //seting up first servo for setup
    set_servo_position(one,1690);
    msleep(200);

    //this is a pause
    msleep(800);


    //setting up second servo for setup
    set_servo_position(two,1360);
    msleep(200);

    msleep(800);

    //setting up third servo for setup
    set_servo_position(three,140);
    msleep(200);


}

//attempting to start code
void first_part()
{





    //Set up code
    set_up();


    stop_black();


    //turn right
    right_angle();

    //angle claw so wont be top heavy starts at 140 want to go to 1370
    while(get_servo_position(3)<1370)
    {
        set_servo_position(3,get_servo_position(3)+40);
        msleep(100);
    }
    msleep(800);

    //two up and down starts at 1360 want to go to 1780
    while(get_servo_position(2)<1780)
    {
        set_servo_position(2,get_servo_position(2)+40);
        msleep(100);
    }

    msleep(800);


    //deleted this part... need to go back and fix
    slow_servo ();


    msleep(800);



    //straight to black
    straight_utilty();

    //stop till we see black
    stop_black();

    //straight a tad
    straight();
    msleep(700);  //was 1000
    ao();


    //immediate left turn 
    left_2 ();//left

    //forward towards black tape and pipe
    straight_pipe ();
    ao();

    //once bumped go back  
    backward(); //backward function
    ao();

    //port 1
    set_servo_position(1,751);
    msleep(200);

    while(get_servo_position(1)<751)
    {
        set_servo_position(1,get_servo_position(1)-50);
        msleep(100);
    }

    //port 2
    // set_servo_position(2,194);
    msleep(200);
    while(get_servo_position(2)>194)
    {
        set_servo_position(2,get_servo_position(2)-20);
        msleep(100);
    }
    //port 3
    set_servo_position(3,1038);
    msleep(200);

    //go forward to pipe
    straightpipe(); //straight function
    msleep(500);
    ao();


    // close claw
    mav(claw,-1500);
    msleep(5000);  //this time will change
    ao();

    //arm up
    //set_servo_position(2,1670);
    // msleep(200);
    while(get_servo_position(2)<1670)
    {
        set_servo_position(2,get_servo_position(2)+20);
        msleep(100);
    }

    
    //back up slightly
backward_pipe();

//turn right
right();
msleep(1000);
    
 //Here we have added some new functions to code









}
