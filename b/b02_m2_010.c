section "b02_m2_010"{
    if (Date_GetDateOption(4) == 1){
        Voice_PlayVoice("B0202010_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "What is it, ｛Shiba＊＊｝?\n... Do I look weird?");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("B0202010_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "No! ... You don't look weird...\nnot at all.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Is he... embarrassed?\nIt seems like he likes this.)");
        Message_CloseMsg();
        Character_Chara_GS2(2, "M2_09F", 0, 1, 0);
        Parameter_AddCh1Param(2, 61, 2);
        Parameter_AddCh1Param(2, 60, 1);
        Parameter_AddCh1Param(2, 62, #2);
        }
    else if (Date_GetDateOption(4) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "How does this swimsuit look?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0202010_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Don't ask me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nIt seems like he doesn't really like\nthis...)");
        Message_CloseMsg();
        Character_Chara_GS2(2, "M2_09F", 0, 1, 0);
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, 1);
        }
    }
