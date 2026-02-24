section "i73_pl_000"{
    Background_Bg_GS2("BG_AR700_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "I am ｛主人公姓名｝.\nI look forward to working with you.");
    Voice_PlayVoice("H7300000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("President", "You're working every Monday to\nSaturday.\nI'm counting on you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
