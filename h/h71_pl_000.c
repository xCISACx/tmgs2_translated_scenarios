section "h71_pl_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I'll join the Handicrafts\nClub!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SCA70_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H8100000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "Let's do our best so that we can do\neven better club activities.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, I understand.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
