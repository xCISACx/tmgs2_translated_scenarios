section "t03_s1_000"{
    Message_Epilog_Text(7, 0);
    if (Parameter_Max_Command(1) == 9){
        Message_Who(0);
        Message_MsgDisp("　　　", "My high school days, which were\nspent doing nothing, have finally\ncome to an end.");
        }
    else if (Parameter_Max_Command(1) == 0){
        Message_Who(0);
        Message_MsgDisp("　　　", "My high school days, which were\ncentered around studying, have\nfinally come to an end.");
        }
    else if (Parameter_Max_Command(1) == 2){
        Message_Who(0);
        Message_MsgDisp("　　　", "My high school days, which were\nspent on nothing but painting, have\nfinally come to an end.");
        }
    else if (Parameter_Max_Command(1) == 10){
        Message_Who(0);
        Message_MsgDisp("　　　", "My high school days, which were\ncentered around club activities,\nhave finally come to an end.");
        }
    else if (Parameter_Max_Command(1) == 1){
        Message_Who(0);
        Message_MsgDisp("　　　", "My high school days, which were\nspent on nothing but exercising,\nhave finally come to an end.");
        }
    else if (Parameter_Max_Command(1) == 4){
        Message_Who(0);
        Message_MsgDisp("　　　", "My high school days, which were\nspent on nothing but following\ntrends, have finally come to an end.");
        }
    else if (Parameter_Max_Command(1) == 3){
        Message_Who(0);
        Message_MsgDisp("　　　", "My high school days, which were\nspent on nothing but being\nfashionable, have finally come to an\nend.");
        }
    else if (Parameter_Max_Command(1) == 5){
        Message_Who(0);
        Message_MsgDisp("　　　", "My high school days, which were\nspent on nothing but hanging out\nwith my friends, have finally come\nto an end.");
        }
    else if (Parameter_Max_Command(1) == 12){
        Message_Who(0);
        Message_MsgDisp("　　　", "My high school days, which were\ncentered around working, have\nfinally come to an end.");
        }
    Message_Epilog_Text(17, 0);
    Message_DispMsg(0);
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　");
    Message_Epilog_Clear(1);
    Message_Epilog_Text(1, 1);
    Message_DispMsg(1);
    System_Call_GS2("T03", "PL", 10);
    Message_Epilog_Text(10, 1);
    Message_Who(0);
    Message_MsgDisp("　　　", "While focusing on a variety of\nthings, I will continue to do my\nbest!");
    System_GlobalWork(3, 0, 0);
    }
