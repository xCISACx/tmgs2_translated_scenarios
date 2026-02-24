section "h21_pl_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I'll join the Lacrosse Club!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SCA20_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H2100000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "We have a group club practice every\nthird Sunday of the month.\nYou must be present.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay!\nI look forward to working with you!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
