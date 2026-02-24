section "h72_pl_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(I will quit the Handicrafts\nClub...)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SCA70_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H8200000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "... I see. That is unfortunate.\nI appreciate your effort.");
    Message_Who(0);
    Message_MsgDisp("　　　", "(I quit the Handicrafts Club.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
