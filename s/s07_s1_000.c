section "s07_s1_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(14, "S1_04F", 0);
    Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_EX_140_000", 127, 40);
    Voice_PlayVoice("S0714000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Sis, hurry. Hurry!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Just a minute, Yuu-kun.\nIf you keep going so fast, we'll get\nlost.");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 1);
    Voice_PlayVoice("S0714000_N00100", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Come on!\nYou'll only get lost if you're too\nrelaxed.");
    Message_Who(0);
    Message_MsgDisp("主人公", "It's fine. God isn't going anywhere.");
    Character_ChFace(0, 0, 9);
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("S0714000_N00200", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Even if God isn't, there is grilled\nsquid running out.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I worry about him...)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
