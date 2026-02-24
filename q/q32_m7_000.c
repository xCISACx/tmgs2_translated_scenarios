section "q32_m7_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(7, "M7_17F", 0);
    Background_Bg_GS2("BG_SCB80_LI_1", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGG_016_000", 127, 40);
    Voice_PlayVoice("Q1007000_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "This area is full of shops....\nYou want to go shopping, it's\nwritten all over your face.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, I want to choose a souvenir.\nWhat about you,\n｛Wakaouji＊＊｝?");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(7, 2, (#1));
    Voice_PlayVoice("Q1007000_G00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Since you have no other partner who\nwants to buy a souvenir...\nSensei will wait here.");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("Q1007000_G00200", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Sensei will come, but I'll restrain\nmyself from looking around.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay, thank you!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder what I should buy...)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(7, "NON");
    }
