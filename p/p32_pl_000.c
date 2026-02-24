section "p32_pl_000"{
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_SC_130_000", 127, 40);
    if (Parameter_GetPl1Param(13) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm participating in the school's\nplay for the Culture Festival today!");
        Message_Who(0);
        Message_MsgDisp("主人公", "I better hurry and prepare!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Even though I'm sick, participating\nin the Culture Festival will be\ntough...\nBut there's a school play...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Even though it's tough, I have to go\nto preparations...");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P32", "PL", 10);
    }
