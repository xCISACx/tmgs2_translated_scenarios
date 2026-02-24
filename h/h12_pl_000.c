section "h12_pl_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(I'm going to quit being the\nBaseball Club's manager...)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SCA10_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H1200000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "... I see.\nIt's unfortunate, but it can't be\nhelped.\nI appreciate the effort you put in.");
    Message_Who(0);
    Message_MsgDisp("　　　", "(I quit the Baseball Club.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
