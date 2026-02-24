section "p52_pl_000"{
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_SC_130_000", 127, 40);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_GetPl1Param(13) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Culture Festival is today.\nThe Art Club will be doing an oil\npainting display.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I better hurry up and prepare!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though I'm sick, I have to\nparticipate in the Culture\nFestival...");
            Message_Who(0);
            Message_MsgDisp("主人公", "The Art Club will be doing an oil\npainting display...\nEven though it's tough, I have to go\nto preparations...");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_GetPl1Param(13) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Culture Festival is today.\nThe Art Club will be doing an\nartwork display.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I better hurry up and prepare!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though I'm sick, I have to\nparticipate in the Culture\nFestival...");
            Message_Who(0);
            Message_MsgDisp("主人公", "The Art Club will be doing an\nartwork display...\nEven though it's tough, I have to go\nto preparations...");
            }
        }
    else {
        if (Parameter_GetPl1Param(13) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Culture Festival is today.\nThe Art Club will be doing a mural\ndisplay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I better hurry up and prepare!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Even though I'm sick, I have to\nparticipate in the Culture\nFestival...");
            Message_Who(0);
            Message_MsgDisp("主人公", "The Art Club will be doing a mural\ndisplay...\nEven though it's tough, I have to go\nto preparations...");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P52", "PL", 10);
    }
