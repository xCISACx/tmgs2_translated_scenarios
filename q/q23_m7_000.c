section "q23_m7_000"{
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm, what are you all doing?");
    Character_ChFace(0, 2, 4);
    Character_BlinkStart(7, 2, (#1));
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("Q2407000_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Young people pillow fighting.\nI am getting excited!");
    Voice_PlayVoice("Q2407000_G00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Hey, you better be careful, too...");
    SoundEffect_PlayStream(3, "SS_T_00_115_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Wah!!");
    Character_ChFace(0, 2, 5);
    Character_ChFace(0, 3, 3);
    Screen_WipeIn(2);
    Voice_PlayVoice("Q2407000_G00200", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Okay, bring it on! ...\nYou have to prepare soon, too!");
    Message_Who(0);
    Message_MsgDisp("主人公", "H...H-Huuuuh～～～～!?");
    Character_Chara_GS2(7, "NON");
    Message_CloseMsg();
    }
