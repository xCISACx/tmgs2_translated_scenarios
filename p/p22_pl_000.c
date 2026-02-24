section "p22_pl_000"{
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_SC_130_000", 127, 40);
    if (Parameter_GetPl1Param(13) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today our class program is a disco\nfor the Culture Festival!");
        Message_Who(0);
        Message_MsgDisp("主人公", "I have to get to the school soon to\nprepare for the opening!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Even though I'm sick, I have to\nparticipate for the school's Culture\nFestival...");
        Message_Who(0);
        Message_MsgDisp("主人公", "The program our class is doing is a\ndisco...\nEven though it's tough, I have to go\nto preparations...");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P22", "PL", 10);
    }
