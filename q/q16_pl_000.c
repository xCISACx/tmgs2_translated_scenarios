section "q16_pl_000"{
    Background_Bg_GS2("BG_SCB50_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGG_016_000", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "Wow...\nAs expected, the World Heritage!\nWhat words would fit the\nimpressiveness of the Golden\nPavilion temple?");
    Message_Who(0);
    Message_MsgDisp("主人公", "I'll go look around the Kyoto temple\na little more to pass time.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Background_Bg_GS2("BG_SCB70_LI_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Wow, so tall...\nThis view from the temple in Kyoto\nis the best!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Well, where should I go next?");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I went to various places and now\nI'm tired...\nTime to go back to the hotel...)");
    Music_StopBGM(0, 40);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
