section "h52_pl_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(I will quit the Art Club...)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SCA50_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H5200000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "... I see.\nThat's unfortunate, but it can't be\nhelped.\nI appreciate your effort.");
    Message_Who(0);
    Message_MsgDisp("　　　", "(I quit the Art Club.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
