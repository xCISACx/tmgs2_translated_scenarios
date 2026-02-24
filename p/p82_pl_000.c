section "p82_pl_000"{
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_SC_130_000", 127, 40);
    if (Parameter_GetPl1Param(13) == 0){
        if (Parameter_GetPl1Param(322) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "Today the Student Council is working\nas a matter of course for the\nCulture Festival.\nI'm the person in charge of making\ntea!");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll miss the preparations if I\ndon't hurry!");
            }
        else if (Parameter_GetPl1Param(322) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Today the Student Council is working\nas a matter of course for the\nCulture Festival.\nI'm in charge of managing materials!");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll miss the preparations if I\ndon't hurry!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Today the Student Council is working\nfor the Culture Festival.\nI'm in charge of supervising the\nsecond floor.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'll miss the preparations if I\ndon't hurry!");
            }
        }
    else {
        if (Parameter_GetPl1Param(322) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though I'm sick, participating\nin the Culture Festival will be\nintense...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm in charge of making the tea, so\nI can't leave work...\nIt's tough, but I'll have to go to\npreparations...");
            }
        else if (Parameter_GetPl1Param(322) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though I'm sick, participating\nin the Culture Festival will be\nintense...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm in charge of managing materials,\nbut I can't leave work...\nIt's tough, but I'll have to go to\npreparations...");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though I'm sick, participating\nin the Culture Festival will be\nintense...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm the floor supervisor, but I\ncan't just leave work...\nIt's tough, but I'll have to go to\npreparations...");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P82", "PL", 10);
    }
