section "l06_m5_000"{
    Background_Bg_GS2("BG_SC302_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
    if (System_GlobalWork(23, 1) == 5){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("FD_05_030_00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello!\nHere, it's a return gift for\nValentine's Day.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks, ｛Chris＊＊｝.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 3, (#1));
        Voice_PlayVoice("FD_05_030_00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If he saw such an amazing smile,\nhe'd fall madly in love with you.\nThat's kinda annoying～.");
        Character_Chara_GS2(5, "NON");
        Music_StopBGM(0, 40);
        }
    else if (Parameter_GetCh1Param(5, 130) <= 2){
        Voice_PlayVoice("L0605000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝. Hello.\nWhat's up?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0605000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I came here to give you this.\nIt's a return gift for the\nchocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow, thanks!");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0605000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's really popular amongst the cute\ngirls.\nI think that you'd surely like it,\ntoo.");
        Voice_PlayVoice("L0605000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Now then, goodbye～.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(5, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, this is just out of\nobligation...)");
        }
    else if (Parameter_GetCh1Param(5, 130) >= 3){
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0605000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Umm... I want you to have this.\nIt's a return gift for the\nchocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow, thanks!");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0605000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If you show me such an amazing\nsmile, it'll overshadow everything I\ngive you...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0605000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Don't expect much.\nI will see you later～.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(5, "NON");
        if (Parameter_GetCh1Param(5, 330) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what this present is?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Hand Made Cream Puffs\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(They look yummy!\nI wonder if ｛Chris＊＊｝\nmade these?\nI look forward to eating them～!)");
            Parameter_AddCh1Param(5, 330, 1);
            Parameter_AddPl1Param(19, 5);
            Parameter_AddPl1Param(22, #5);
            }
        else if (Parameter_GetCh1Param(5, 330) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what this present is?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Clay Flower\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, this is hand made!\nIt's cute... I will treasure it!)");
            Parameter_AddPl1Param(17, 15);
            }
        }
    Parameter_InCh1Param(5, 555, 0);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
