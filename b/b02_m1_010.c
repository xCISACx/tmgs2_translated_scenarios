section "b02_m1_010"{
    if (Date_GetDateOption(4) == 1){
        Voice_PlayVoice("B0201010_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Eh...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... What?");
        Voice_PlayVoice("B0201010_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "No, it's nothing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Maybe it doesn't suit me...\nDo you hate this kind of clothing?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("B0201010_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... I like it... a lot.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\nlikes this swimsuit.)");
        Message_CloseMsg();
        Character_Chara_GS2(1, "M1_09F", 0, 1, 0);
        Parameter_AddCh1Param(1, 61, 2);
        Parameter_AddCh1Param(1, 60, 1);
        Parameter_AddCh1Param(1, 62, #2);
        }
    else if (Date_GetDateOption(4) == 2){
        Voice_PlayVoice("B0201010_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, right...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... What?");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0201010_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Nothing, your swimsuit.\nIf it were a little more like...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... It doesn't suit me?");
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("B0201010_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Eh?\nAh, no, it suits you, it suits you!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\ndoesn't like this swimsuit.\nI screwed up.)");
        Message_CloseMsg();
        Character_Chara_GS2(1, "M1_09F", 0, 1, 0);
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, 1);
        }
    }
