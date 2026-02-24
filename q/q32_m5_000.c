section "q32_m5_000"{
    Character_ChFace(0, 0, 10);
    Character_Chara_GS2(5, "M5_01F", 0);
    Background_Bg_GS2("BG_SCB80_LI_1", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGG_016_000", 127, 40);
    Voice_PlayVoice("Q1005000_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Wow～... What should I do?\nWhat should I do～?");
    Voice_PlayVoice("Q1005000_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Hey, can we go over there?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay.\nLet's go our own way and meet back\nhere.");
    Character_ChFace(0, 2, 3);
    Character_BlinkStart(5, 3, (#1));
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("Q1005000_E00200", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Okay! I'm going!");
    Character_Chara_GS2(5, "NON");
    SoundEffect_PlayStream(3, "SS_T_00_020_M00");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Haha, he's like a kid.\nNow then, what should I buy?)");
    SoundEffect_StopStream(3, 40);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(5, "NON");
    }
