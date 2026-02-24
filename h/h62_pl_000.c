section "h62_pl_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(I will quit the Brass Band...)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H6200000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "... I see.\nThat's too bad, but it can't be\nhelped.\nI appreciate your hard work.");
    Message_Who(0);
    Message_MsgDisp("　　　", "(I quit the Brass Band.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
