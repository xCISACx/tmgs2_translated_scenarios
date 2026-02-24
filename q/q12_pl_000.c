section "q12_pl_000"{
    int var0;
    int var1;
    int var2 = 0;
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Today's a free day, what should I\ndo?\nGoing alone would be wretched.\nI wonder if someone will see me and\ncall me out.");
    if (System_GlobalWork(1, 1) == 1){
        var1 = 1;
        }
    else if (System_GlobalWork(1, 1) == 2){
        var1 = 2;
        }
    else if (System_GlobalWork(1, 1) == 3){
        var1 = 3;
        }
    else if (System_GlobalWork(1, 1) == 4){
        var1 = 4;
        }
    else if (System_GlobalWork(1, 1) == 5){
        var1 = 5;
        }
    else if (System_GlobalWork(1, 1) == 7){
        var1 = 7;
        }
    Message_Sele_Man(7, 6, var1);
    switch (Message_Sele_Man_Result()){
        case 1:
        if (System_GlobalWork(23, 1) == 1){
            System_Call_GS2("Q15", "M1", 0);
            }
        else {
            System_Call_GS2("Q13", "M1", 0);
            }
        break ;
        case 2:
        if (System_GlobalWork(23, 1) == 2){
            System_Call_GS2("Q15", "M2", 0);
            }
        else {
            System_Call_GS2("Q13", "M2", 0);
            }
        break ;
        case 3:
        if (System_GlobalWork(23, 1) == 3){
            System_Call_GS2("Q15", "M3", 0);
            }
        else {
            System_Call_GS2("Q13", "M3", 0);
            }
        break ;
        case 4:
        if (System_GlobalWork(23, 1) == 4){
            System_Call_GS2("Q15", "M4", 0);
            }
        else {
            System_Call_GS2("Q13", "M4", 0);
            }
        break ;
        case 5:
        if (System_GlobalWork(23, 1) == 5){
            System_Call_GS2("Q15", "M5", 0);
            }
        else {
            System_Call_GS2("Q13", "M5", 0);
            }
        break ;
        case 7:
        if (System_GlobalWork(23, 1) == 7){
            System_Call_GS2("Q15", "M7", 0);
            }
        else {
            System_Call_GS2("Q13", "M7", 0);
            }
        break ;
        }
    }
