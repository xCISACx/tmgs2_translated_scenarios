section "f11_m6_100"{
    Character_BlinkStart(6, 1, (#1), 1);
    Character_BlinkStart(6, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Character_ChFace(0, 0, 0);
    if (Parameter_GetCh1Param(6, 328) == 0){
        Parameter_AddCh1Param(6, 328, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Amachi＊＊｝.)");
        Music_PlayBGM(0, "MN_C_06_001_D02", 127, 40);
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("F1106100_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "...\nSo, what you can see across from the\ngymnasium is the courtyard.\nYeah, our school traditions are\nrelatively liberal.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Is he showing around his juniors\nfrom middle school...?\nSo ｛Amachi＊＊｝ is missed\nby his juniors...)");
        }
    else if (Parameter_GetCh1Param(6, 328) == 1){
        Parameter_AddCh1Param(6, 328, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Amachi＊＊｝.)");
        Music_PlayBGM(0, "MN_C_06_001_D02", 127, 40);
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("F1106100_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... I got it.\nIf we have room for it in the\nbudget, hurry up and buy some more!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He's instructing the people in his\nclass...\nI wonder if ｛Amachi＊＊｝ is\nthe leader-type in his class?)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
