section "q01_pl_000"{
    Background_Bg_GS2("BG_SCB00_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(13) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "I've waited so long for a field\ntrip!\nI'm looking forward to this.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "I don't think I can participate in\nthe field trip due to being sick...");
        Message_Who(0);
        Message_MsgDisp("主人公", "I couldn't join anything.\nI caused trouble for everyone...");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
