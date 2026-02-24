section "q15_pl_000"{
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (System_GlobalWork(3, 1) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "I have to get going soon.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "... It can't be helped.\nI'll go alone...");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
