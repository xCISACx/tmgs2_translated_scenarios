section "f11_g3_100"{
    Character_BlinkStart(12, 1, (#1), 1);
    Character_BlinkStart(12, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(12, 328) == 0){
        Parameter_AddCh1Param(12, 328, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Nishimoto＊＊｝.)");
        Music_PlayBGM(0, "MN_C_12_002_D00", 127, 40);
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("F1112100_L00000", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Crepes! Petit Chou!\nWah, I'm so troubled!\nWhich one should I buy!?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Nishimoto＊＊｝'s eyes are\nsparkling...\nShe really looks like she's having\nfun!)");
        }
    else if (Parameter_GetCh1Param(12, 328) == 1){
        Parameter_AddCh1Param(12, 328, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Nishimoto＊＊｝.)");
        Music_PlayBGM(0, "MN_C_12_002_D00", 127, 40);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(12, 3, (#1), 1);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("F1112100_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Right, the okonomiyaki from that\nclass is superb!\nThere's no mistaking it, since I\nsaid so!");
        Character_BlinkStart(12, 0, (#1), 1);
        Voice_PlayVoice("F1112100_L00200", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "So, who are you, and what school did\nyou come from?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh!\nCould she be talking to a stranger?\nShe makes friends fast.)");
        }
    else if (Parameter_GetCh1Param(12, 328) == 2){
        Parameter_AddCh1Param(12, 328, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it's ｛Nishimoto＊＊｝.)");
        Music_PlayBGM(0, "MN_C_12_002_D00", 127, 40);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(12, "G3_01F", 0);
        Voice_PlayVoice("F1112100_L00300", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Where... Where!?\nWhere is the class that is only\nmaking 10 Hanegasaki Academy Special\nParfaits!?");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(12, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(She left...\nWhen sweets are involved, she is\nmore powerful than usual...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(12, 86, 1);
    }
