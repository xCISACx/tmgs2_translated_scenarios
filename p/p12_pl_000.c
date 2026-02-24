section "p12_pl_000"{
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_SC_130_000", 127, 40);
    if (Parameter_GetPl1Param(13) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today's the Culture Festival.\nOur class will set up a coffee\nlounge.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I have to go to the classroom and\nprepare before the opening!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Even though I'm sick, participating\nin the Culture Festival shouldn't\nhurt that much...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Our class is a coffee lounge...\nIt was hard, but I didn't go to\npreparations...");
        }
    Music_StopBGM(0, 40);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P12", "PL", 10);
    }
