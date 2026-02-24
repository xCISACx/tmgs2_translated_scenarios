section "q17_g2_000"{
    Character_ChFace(0, 2, 2);
    Character_BlinkStart(11, 3, (#1));
    Character_ChFace(0, 3, 3);
    Character_Chara_GS2(11, "G2_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("Q0811000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "... *Phew* I am a little tired.\nIt was a busy day.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I had fun!");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(11, 2, (#1));
    Voice_PlayVoice("Q0811000_K00100", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "If it is okay, would you like to go\nto places again the day after\ntomorrow?\nYou would have fun...");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, sounds great!");
    Character_BlinkStart(11, 3, (#1));
    Voice_PlayVoice("Q0811000_K00200", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Good. I look forward to it!\nHere, the day after tomorrow then!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Roger!");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
