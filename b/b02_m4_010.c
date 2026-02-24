section "b02_m4_010"{
    if (Date_GetDateOption(4) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝, thank you for\nwaiting!");
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0204010_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Hey.");
        Message_Who(0);
        Message_MsgDisp("主人公", "What's wrong, ｛Hariya＊＊｝?");
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("B0204010_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "How should I say this...?\nI don't know which way to look, in a\nway...");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(4, 3, (#1), 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("B0204010_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Nice. It's quite nice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm glad...\nGood thing I'm wearing this!)");
        Message_CloseMsg();
        Character_Chara_GS2(4, "M4_09F", 0, 1, 0);
        Parameter_AddCh1Param(4, 61, 2);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if (Date_GetDateOption(4) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank you for waiting!");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("B0204010_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...........");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nWhat's wrong, ｛Hariya＊＊｝?");
        Character_ChFace(0, 7, 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(4, 2, (#1), 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0204010_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "An absolute no-go.\nWhere did you buy that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝ seems to not\nlike this swimsuit...\nWhat a mistake.)");
        Message_CloseMsg();
        Character_Chara_GS2(4, "M4_09F", 0, 1, 0);
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, 1);
        }
    }
