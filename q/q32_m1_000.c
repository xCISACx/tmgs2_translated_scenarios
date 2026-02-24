section "q32_m1_000"{
    Character_ChFace(0, 3, 2);
    Character_Chara_GS2(1, "M1_01F", 0);
    Background_Bg_GS2("BG_SCB80_LI_1", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGG_016_000", 127, 40);
    Voice_PlayVoice("Q1001000_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Souvenirs...\nDo you think I should buy some for\nmy parents and grandfather?");
    Message_Who(0);
    Message_MsgDisp("主人公", "What do you want to do...?\nI'm sure they will look forward to\nit.");
    Character_BlinkStart(1, 3, (#1));
    Character_ChFace(0, 3, 5);
    Voice_PlayVoice("Q1001000_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Think so?\nEither way, I rarely return with\nsome.");
    Message_Who(0);
    Message_MsgDisp("主人公", "You're right.");
    Character_ChFace(0, 0, 3);
    Voice_PlayVoice("Q1001000_A00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Well, I don't want to seem like some\nrebellious brat who likes to annoy,\nso I'll buy them one just in case.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I think it's good that he wants to\nbe obedient...\nBut I wonder what\n｛Saeki＊＊｝ will buy?)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(1, "NON");
    }
