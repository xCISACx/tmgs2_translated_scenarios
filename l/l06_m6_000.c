section "l06_m6_000"{
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_01F", 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_C_06_000_D00", 127, 40);
    if (System_GlobalWork(23, 1) == 6){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("", 6, "FD_06_030_00000");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nPlease take this.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, a return gift?\nThanks for going to all the trouble.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("FD_06_030_00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You are welcome! ...\nTell me what happens later, okay?\nI'm curious.");
        Character_Chara_GS2(6, "NON");
        Music_StopBGM(0, 40);
        }
    else if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("", 6, "L0606000_F00000");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nThank you for last month.\nThis is a return gift since it's\nWhite Day.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks, ｛Amachi＊＊｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, this is just out of\nobligation.)");
        }
    else if (Parameter_GetCh1Param(6, 130) >= 3){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("", 6, "L0606000_F00400");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝! Here!\nIt's a return gift since it's White\nDay.\nBe grateful, okay!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow, thanks!");
        Voice_PlayVoice("L0606000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "It's fragile, so take care of it!\nLater!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(6, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what this present is?)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Glass Accessory Case\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Wow, it's cute! I'll treasure it!)");
        Parameter_AddCh1Param(6, 330, 1);
        Parameter_AddPl1Param(21, 10);
        Parameter_AddPl1Param(18, 5);
        }
    Parameter_InCh1Param(6, 555, 0);
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
