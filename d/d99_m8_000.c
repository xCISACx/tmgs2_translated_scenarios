section "d99_m8_000"{
    Background_Bg_GS2("BG_NE000_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Where should I go now...? Huh?");
    Message_Who(0);
    Message_MsgDisp("主人公", "(That person over there...\nCould it be... Masaki-senpai?)");
    Still_Event("EV_08_20", #1, 0, 60);
    Message_Who(0);
    Message_MsgDisp("主人公", "(It's him.\nHe seems completely different to how\nhe normally looks...)");
    Still_Approach(8, 223, 0, 0, 1, 1);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Even though he's just wearing a\nsuit and tie.\nHow strange...)");
    Still_ApproachEnd();
    Still_Event("");
    Message_Who(0);
    Message_MsgDisp("主人公", "He left.... Ah.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(That's right.\nHe's looking for a full-time job\nnow.\nEven though it's his day off, it\nmust be tough...)");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Maybe I should give him some\nrefreshments the next time I work\nwith him?)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 61, 6);
    Parameter_AddCh1Param(8, 60, 3);
    Parameter_AddCh1Param(8, 62, #5);
    }
