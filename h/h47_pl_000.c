section "h47_pl_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        Background_Bg_GS2("BG_SCA11_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's finally time for the National\nHigh School Baseball Championships!\nI'll do my best!!)");
        }
    else {
        Background_Bg_GS2("BG_SCA21_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(The Inter High School Championships\nare finally here!\nI'll do my best!!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
