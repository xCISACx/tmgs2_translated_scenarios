section "p72_pl_000"{
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_SC_130_000", 127, 40);
    if (Parameter_GetPl1Param(13) == 0){
        if (Parameter_GetPl1Param(322) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "Today's Culture Festival will be\nfashion shows by the Handicraft Club\nin the gym.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I have to hurry and set up!");
            }
        else if (Parameter_GetPl1Param(322) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Today's Culture Festival will be\nfashion shows by the Handicraft Club\nin the gym.");
            Message_Who(0);
            Message_MsgDisp("主人公", "This year's theme is party dresses!\nI'm excited.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nThat wasn't the time to say such\nthings!\nI have to get ready for preparations\nsoon!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Today's Culture Festival will be\nfashion shows by the Handicraft Club\nin the gym.");
            Message_Who(0);
            Message_MsgDisp("主人公", "This year's theme is wedding\ndresses!\nI'm excited.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nThat wasn't the time to say such\nthings!\nI have to get ready for preparations\nsoon!");
            }
        }
    else {
        if (Parameter_GetPl1Param(322) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though I'm sick, participating\nin the Culture Festival will be\nintense...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though the Handicraft Club is\nhaving a fashion show in the gym...\nIt's tough, but I have to go to\npreparations...");
            }
        else if (Parameter_GetPl1Param(322) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Being sick and participating in the\nCulture Festival is intense...\nBut, the fashion show is being held\nin the gym...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Making party dresses takes a lot of\neffort.\nEven though it's tough, I have to\nparticipate...");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Being sick and participating in the\nCulture Festival is intense...\nBut the fashion show is being held\nin the gym...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Making wedding dresses takes a lot\nof effort, even though it's tough, I\nhave to participate...");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P72", "PL", 10);
    }
